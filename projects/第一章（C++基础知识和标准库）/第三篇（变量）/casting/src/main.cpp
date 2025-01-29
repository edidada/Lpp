int main()
{
    // 定义一个浮点数变量 myFloat，并初始化为 3.14
    float myFloat{ 3.14f };

    // 方法 1: 使用 C 风格的强制类型转换将 myFloat 转换为 int 类型
    int i1{ (int)myFloat };                // i1 的值为 3，因为浮点数被截断为整数

    // 方法 2: 使用函数式强制类型转换将 myFloat 转换为 int 类型
    int i2{ int(myFloat) };                // i2 的值为 3，与方法 1 效果相同

    // 方法 3: 使用 C++ 的 static_cast 进行类型转换，将 myFloat 转换为 int 类型
    int i3{ static_cast<int>(myFloat) };   // i3 的值为 3，推荐使用 static_cast 进行显式类型转换

    // 定义一个短整型变量 someShort，并初始化为 16
    short someShort{ 16 };

    // 将 someShort 隐式转换为 long 类型，并赋值给 someLong
    long someLong{ someShort };          // 不需要显式类型转换，因为 short 可以隐式转换为 long

    // 返回 0，表示程序正常结束
    return 0;
}