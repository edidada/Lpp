import std;  // 导入标准库模块

int main()
{
    int value;  // 定义一个整型变量 value，用于存储用户输入的值

    // 使用 std::cin 从标准输入读取一个整数，并将其存储到变量 value 中
    std::cin >> value;

    // 使用 std::println 格式化输出用户输入的值，将其插入到字符串中的占位符 {} 处
    std::println("你输入的值是： {}", value);

    return 0;  // 返回 0，表示程序正常结束
}