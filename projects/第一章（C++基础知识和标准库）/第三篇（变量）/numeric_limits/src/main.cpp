// 导入标准库模块
import std;

// 使用标准命名空间，避免每次调用标准库函数时都需要写std::
using namespace std;

// 主函数
int main()
{
    // 打印整数类型的相关信息
    println("int:");
    // 打印int类型的最大值
    println("int 类型最大值: {}", numeric_limits<int>::max());
    // 打印int类型的最小值
    println("int 类型最小值: {}", numeric_limits<int>::min());
    // 打印int类型的最低值（对于整数类型，通常与min相同）
    println("int 类型最低值: {}", numeric_limits<int>::lowest());
    
    // 打印一个空行，用于分隔不同类型的输出
    println("\ndouble:");
    // 打印double类型的最大值
    println("double 类型最大值: {}", numeric_limits<double>::max());
    // 打印double类型的最小正值（注意：这是最小的正数，不是最小的负数）
    println("double 类型最小值: {}", numeric_limits<double>::min());
    // 打印double类型的最低值（对于浮点数类型，通常是一个非常大的负数）
    println("double 类型最低值: {}", numeric_limits<double>::lowest());
}