// 导入标准库模块
import std;

// 使用标准命名空间，避免每次调用标准库函数时都要加std::前缀
using namespace std;

int main()
{
    // 初始化一个整数变量someInteger，值为256
    int someInteger{ 256 };

    // 声明一个短整型变量someShort
    short someShort;

    // 声明一个长整型变量someLong
    long someLong;

    // 声明一个单精度浮点型变量someFloat
    float someFloat;

    // 声明一个双精度浮点型变量someDouble
    double someDouble;

    // someInteger自增1，值变为257
    someInteger++;

    // someInteger乘以2，值变为514
    someInteger *= 2;

    // 将较大的整数类型转换为较小的整数类型时，可能会导致警告或错误，
    // 因此需要使用static_cast进行显式转换
    someShort = static_cast<short>(someInteger);

    // 将someShort乘以10000并赋值给someLong
    someLong = someShort * 10000;

    // 将someLong与0.785相加，结果赋值给someFloat
    someFloat = someLong + 0.785f;

    // 为了确保除法运算以双精度进行，先将someFloat显式转换为double类型，
    // 然后再进行除法运算
    someDouble = static_cast<double>(someFloat) / 100000;

    // 打印someDouble的值
    println("{}", someDouble);
}