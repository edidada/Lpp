// C++23 模块化标准库导入（替代传统的头文件包含方式）
import std;

// main函数是每个C++程序的执行入口
// int 表示返回类型，0通常表示程序正常退出
int main()
{
    // 使用标准库的println函数输出带换行的文本
    // 相比传统cout，println自动添加换行更简洁（C++23新增）
    std::println("Hello, World!");
    
    // 返回操作系统状态码
    // 0表示程序执行成功，非0值通常表示错误类型
    return 0;
}