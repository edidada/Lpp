// 导入标准库模块
import std;

// 定义一个名为 mycode 的命名空间
namespace mycode {
    // 在 mycode 命名空间中定义一个名为 foo 的函数
    void foo()
    {
        // 调用 std::println 函数，输出一条消息
        std::println("mycode 命名空间中的 foo() 函数被调用");
    }
}

// 使用 mycode 命名空间，使得在后续代码中可以直接使用 mycode 中的内容，而不需要显式地写 mycode::
using namespace mycode;

// 主函数，程序的入口点
int main()
{
    // 显式调用 mycode 命名空间中的 foo 函数
    mycode::foo();  // 输出: "mycode 命名空间中的 foo() 函数被调用"

    // 由于使用了 using namespace mycode;，这里可以直接调用 foo()，而不需要写 mycode::foo()
    foo();          // 输出: "mycode 命名空间中的 foo() 函数被调用"

    // 返回 0，表示程序正常结束
    return 0;
}