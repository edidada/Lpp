// 导入标准库模块（C++23 引入模块化标准库）
import std;

// 使用标准库命名空间，避免重复写 std::
using namespace std;

// 函数声明：myFunction 接受一个 int 和一个 char 参数，无返回值
void myFunction(int i, char c);

// 函数定义：myFunction 的实现
void myFunction(int i, char c)
{
    // 使用 println 格式化输出，打印整数 i 的值
    println("The value of i is {}.", i);
    // 使用 println 格式化输出，打印字符 c 的值
    println("The value of c is {}.", c);
}

// 函数定义：addNumbers 接受两个 int 参数，返回它们的和
int addNumbers(int number1, int number2)
{
    // 使用 println 输出当前函数的名称（__func__ 是预定义的函数名宏）
    println("Entering function {}", __func__);
    // 返回两个整数的和
    return number1 + number2;
}

// 注释掉的代码：使用 auto 自动推导返回类型的 addNumbers 函数
//auto addNumbers(int number1, int number2)
//{
//    println("Entering function {}", __func__);
//    return number1 + number2;
//}

// 函数重载：addNumbers 接受两个 double 参数，返回它们的和
double addNumbers(double a, double b)
{
    // 返回两个浮点数的和
    return a + b;
}

// 主函数：程序的入口点
int main()
{
    // 定义一个整数变量 someInt，并初始化为 6
    int someInt{ 6 };
    // 定义一个字符变量 someChar，并初始化为 'c'
    char someChar{ 'c' };

    // 调用 myFunction，传入整数 8 和字符 'a'
    myFunction(8, 'a');
    // 调用 myFunction，传入变量 someInt 和字符 'b'
    myFunction(someInt, 'b');
    // 调用 myFunction，传入整数 5 和变量 someChar
    myFunction(5, someChar);

    // 调用 addNumbers（整数版本），传入 5 和 3，并将结果赋值给 sum
    int sum{ addNumbers(5, 3) };

    // 调用 addNumbers（整数版本），传入 1 和 2，并打印结果
    println("{}", addNumbers(1, 2));        // 输出 3
    // 调用 addNumbers（浮点数版本），传入 1.11 和 2.22，并打印结果
    println("{}", addNumbers(1.11, 2.22));  // 输出 3.33
}