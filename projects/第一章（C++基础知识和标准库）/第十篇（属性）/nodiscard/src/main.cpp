// 使用 [[nodiscard]] 属性标记函数 func()
// 表示该函数的返回值不应该被忽略
[[nodiscard]] int func()
{
    // 返回一个整数值 42
    // 由于函数被标记为 [[nodiscard]]，调用者必须处理返回值
    return 42;
}

// main 函数，程序的入口点
int main()
{
    // 调用 func() 函数
    // 由于 func() 被标记为 [[nodiscard]]，忽略返回值可能会导致编译器警告
    func();

    // 返回 0，表示程序正常退出
    return 0;
}