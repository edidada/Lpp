// 导入标准库模块
import std;

// 使用标准命名空间，避免每次调用标准库函数时都要加std::前缀
using namespace std;

// 主函数入口
int main()
{
    // 定义一个整数变量i，并初始化为11
    int i{ 11 };

    // 使用C++20引入的三路比较运算符（<=>）来比较i和0，结果存储在strong_ordering类型的变量result中
    // strong_ordering是一个枚举类型，表示比较的结果：less、greater、equal
    strong_ordering result{ i <=> 0 };

    // 使用C++20引入的命名比较函数is_lt来判断result是否为less（小于）
    if (is_lt(result)) {
        // 如果result是less，输出"less"
        println("less");
    }

    // 使用C++20引入的命名比较函数is_gt来判断result是否为greater（大于）
    if (is_gt(result)) {
        // 如果result是greater，输出"greater"
        println("greater");
    }

    // 使用C++20引入的命名比较函数is_eq来判断result是否为equal（等于）
    if (is_eq(result)) {
        // 如果result是equal，输出"equal"
        println("equal");
    }
}