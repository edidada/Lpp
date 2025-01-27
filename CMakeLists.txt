# 设置最低 CMake 版本要求
cmake_minimum_required(VERSION 3.30)

# 项目名设置为变量
set(PROJECT_NAME "Lpp")

# 设置项目语言
project(${PROJECT_NAME} LANGUAGES CXX)

## 设置 vcpkg toolchain 文件，需要在开发工具中配置

# 设置 C++ 标准为 C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 设置使用的编译器，开发工具也要设置相应的工具链
#set(USE_COMPILER "MSVC")
set(USE_COMPILER "LLVM")

# 检查编译器选择是否合法
if (NOT (USE_COMPILER STREQUAL "LLVM" OR USE_COMPILER STREQUAL "MSVC"))
    message(FATAL_ERROR "未知编译器选择: ${USE_COMPILER}. 请选择 'LLVM' 或 'MSVC'.")
endif ()

# 设置编译器路径（根据选择的编译器）
if (USE_COMPILER STREQUAL "MSVC")
    # 设置 MSVC 安装目录，需要和实际安装目录一致
    set(MSVC_PATH $ENV{MSVC_PATH})
    if (NOT EXISTS "${MSVC_PATH}")
        # setx MSVC_PATH D:\Devs\VisualStudio\2022\Community\VC\Tools\MSVC\14.42.34433
        message(FATAL_ERROR "MSVC 环境变量未设置，需要和实际安装目录一致。Windows例：setx MSVC_PATH <你的安装路径>")
    endif ()

    include_directories("${MSVC_PATH}/include")

    set(CMAKE_CXX_COMPILER "${MSVC_PATH}/bin/Hostx64/x64/cl.exe")
    set(MSVC_MODULE_PATH "${MSVC_PATH}/modules")
    message(STATUS "Windows 使用 MSVC 编译器")
elseif (USE_COMPILER STREQUAL "LLVM")
    # 设置 LLVM 安装目录，需要和实际安装目录一致
    set(LLVM_PATH $ENV{LLVM_PATH})
    if (NOT EXISTS "${LLVM_PATH}")
        # setx LLVM_PATH E:\Sdks\LLVM\llvm-19.1.7
        # export LLVM_PATH=/opt/llvm/19.1.7
        message(FATAL_ERROR "LLVM_PATH 环境变量未设置，需要和实际安装目录一致。\nWindows例：setx LLVM_PATH <你的安装路径>\nLinux例：export LLVM_PATH=<你的安装路径>")
    endif ()
    if (WIN32)
        # Windows 上使用 clang++.exe
        set(CMAKE_CXX_COMPILER "${LLVM_PATH}/bin/clang++.exe")
        message(STATUS "Windows 使用 LLVM 编译器")
    elseif (UNIX)
        # Linux 上使用 clang++
        set(CMAKE_CXX_COMPILER "${LLVM_PATH}/bin/clang++")
        message(STATUS "Linux 使用 LLVM 编译器")
    endif ()
endif ()

# 创建可执行文件
add_executable(${PROJECT_NAME} main.cpp)

# 设置链接器标志（根据需要调整）
set(CMAKE_EXE_LINKER_FLAGS "-static")

# 为目标添加 C++ 模块的源文件
if (USE_COMPILER STREQUAL "MSVC")
    target_sources(${PROJECT_NAME}
            PRIVATE
            FILE_SET CXX_MODULES
            BASE_DIRS ${MSVC_MODULE_PATH}
            FILES ${MSVC_MODULE_PATH}/std.ixx
            ${MSVC_MODULE_PATH}/std.compat.ixx)
elseif (USE_COMPILER STREQUAL "LLVM")
    target_sources(${PROJECT_NAME}
            PRIVATE
            FILE_SET CXX_MODULES
            BASE_DIRS ${LLVM_PATH}/share/libc++/v1
            FILES ${LLVM_PATH}/share/libc++/v1/std.cppm ${LLVM_PATH}/share/libc++/v1/std.compat.cppm)
endif ()

find_package(unofficial-sqlite3 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE unofficial::sqlite3::sqlite3)