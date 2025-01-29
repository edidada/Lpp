// 导入标准库模块
import std;

// 使用 std 命名空间，使得可以直接使用 std 中的内容，而不需要写 std::
using namespace std;

// 主函数，程序的入口点
int main()
{
    // 定义一个未初始化的整数变量 uninitializedInt
    // 未初始化的变量可能包含一个随机的、未定义的值，不同的编译器会不一样
    int uninitializedInt;

    // 定义一个初始化的整数变量 initializedInt，并赋予初始值 7
    // 初始化后的变量具有明确的值
    int initializedInt{ 7 };

    // 输出未初始化变量的值
    // 由于 uninitializedInt 未初始化，它的值可能是随机的
    println("{} 是一个随机值，经测试LLVM是：0，并不会随机", uninitializedInt);

    // 输出已初始化变量的值
    // initializedInt 的值为 7，因此输出是确定的
    println("{} 是一个已初始化的值", initializedInt);

    // 返回 0，表示程序正常结束
    return 0;
}