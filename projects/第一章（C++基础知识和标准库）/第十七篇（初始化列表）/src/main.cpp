// 包含标准输入输出库
import std;

// 使用标准命名空间，避免每次调用标准库函数时都要加std::
using namespace std;

// 定义一个函数sum，接受一个initializer_list<int>类型的参数values
// 可以理解为接收可变长度的参数
int sum(initializer_list<int> values)
{
    // 初始化一个整型变量total，用于存储累加的结果
    int total{ 0 };

    // 使用范围for循环遍历initializer_list中的每个元素
    for (int value : values) {
        // 将当前元素的值累加到total中
        total += value;
    }

    // 返回累加的结果
    return total;
}

// 主函数
int main()
{
    // 调用sum函数，计算1, 2, 3的和，并将结果赋值给a
    int a{ sum({ 1, 2, 3 }) };

    // 调用sum函数，计算10, 20, 30, 40, 50, 60的和，并将结果赋值给b
    int b{ sum({ 10, 20, 30, 40, 50, 60 }) };

    // 使用C++23的println函数输出a的值
    println("{}", a);

    // 使用C++23的println函数输出b的值
    println("{}", b);

    // 这行代码会导致编译错误，因为3.0是double类型，不能隐式转换为int
    //int c{ sum({ 1, 2, 3.0 }) }; // Error
}