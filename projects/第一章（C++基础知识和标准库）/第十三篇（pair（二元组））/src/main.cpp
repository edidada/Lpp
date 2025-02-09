// 导入标准库中的所有模块
import std;

// 使用标准命名空间，避免每次调用标准库函数时都需要加std::前缀
using namespace std;

// 主函数入口
int main()
{
    // 创建一个pair对象myPair，其中第一个元素是double类型的1.23，第二个元素是int类型的5
    pair<double, int> myPair{ 1.23, 5 };

    // 使用CTAD（类模板参数推导），编译器会自动推导出myPair的类型为pair<double, int>
    // pair myPair { 1.23, 5 };  // 使用CTAD

    // 使用println函数输出myPair的第一个元素和第二个元素
    println("{} {}", myPair.first, myPair.second);
}