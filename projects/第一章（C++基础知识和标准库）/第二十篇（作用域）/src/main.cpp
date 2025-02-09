// 导入标准库模块
import std;

// 使用标准命名空间
using namespace std;

// 定义 Demo 类
class Demo
{
public:
    // 定义成员函数 get，返回值为 5
    int get() { return 5; }
};

// 定义全局函数 get，返回值为 10
int get() { return 10; }

// 定义命名空间 NS
namespace NS
{
    // 定义命名空间内的函数 get，返回值为 20
    int get() { return 20; }
}

// main 函数，程序入口
int main()
{
    // 创建 Demo 类的对象 d
    Demo d;

    // 调用对象 d 的成员函数 get，输出 5
    println("{}", d.get());      // 输出 5

    // 调用命名空间 NS 中的函数 get，输出 20
    println("{}", NS::get());    // 输出 20

    // 调用全局函数 get，输出 10
    println("{}", ::get());      // 输出 10

    // 调用全局函数 get，输出 10
    println("{}", get());        // 输出 10
}