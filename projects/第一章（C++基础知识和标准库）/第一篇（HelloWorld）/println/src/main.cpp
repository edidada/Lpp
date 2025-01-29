import std;  // 导入标准库模块

int main()
{
    // 使用标准库中的println函数，输出"Hello, World!"到控制台
    std::println("Hello, World!");

    // 使用格式化输出，将219插入到字符串中的占位符{}处
    std::println("There are {} ways I love you.", 219);

    // 使用多个占位符，分别将2、4、6插入到字符串中的对应位置
    std::println("{} + {} = {}", 2, 4, 6);

    // 使用std::cerr作为输出流，输出错误信息"Error: 6"
    std::println(std::cerr, "Error: {}", 6);

    return 0;  // 返回0，表示程序正常结束
}