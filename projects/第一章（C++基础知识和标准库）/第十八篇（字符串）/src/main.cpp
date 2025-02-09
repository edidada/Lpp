// 导入C++23标准库模块
import std;

// 使用标准命名空间，避免每次调用标准库函数时都要加std::
using namespace std;

// 主函数
int main()
{
    // 定义一个字符串变量myString，并初始化为"Hello, World"
    string myString{ "Hello, World" };

    // 使用C++23的println函数输出myString的值
    println("The value of myString is {}", myString);

    // 使用C++23的println函数输出myString的第二个字符（索引为1）
    println("The second letter is {}", myString[1]);
}