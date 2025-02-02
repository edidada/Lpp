// 导入C++23标准库模块
import std;

// 使用标准命名空间
using namespace std;

// 定义一个函数，将整数除以32
int divideBy32(int x)
{
    // 假设x的值大于或等于0，编译器可以基于此假设进行优化
    [[assume(x >= 0)]];
    // 返回x除以32的结果
    return x / 32;
}

// 主函数
int main()
{
    // 调用divideBy32函数，并打印结果
    println("Result: {}", divideBy32(64));
}