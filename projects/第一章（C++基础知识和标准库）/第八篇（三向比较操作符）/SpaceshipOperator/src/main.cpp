// 导入标准库模块
import std;

// 使用标准命名空间
using namespace std;

// 主函数
int main()
{
    // 定义一个整数变量i，并初始化为11
    int i{ 11 };

    // 使用C++20引入的三向比较运算符（<=>）比较i和0，结果存储在result中
    // strong_ordering是一个枚举类型，表示比较的结果（小于、等于、大于）
    strong_ordering result{ i <=> 0 };

    // 如果result等于strong_ordering::less，表示i小于0，输出"less"
    if (result == strong_ordering::less) { println("less"); }

    // 如果result等于strong_ordering::greater，表示i大于0，输出"greater"
    if (result == strong_ordering::greater) { println("greater"); }

    // 如果result等于strong_ordering::equal，表示i等于0，输出"equal"
    if (result == strong_ordering::equal) { println("equal"); }
}