// 定义一个函数 `func`，接受两个整数参数 `param1` 和 `param2`，并返回一个整数。
// `[[maybe_unused]]` 是 C++17 引入的属性，用于告诉编译器参数 `param2` 可能不会被使用，避免编译器产生未使用变量的警告。
int func(int param1, [[maybe_unused]] int param2)
{
    // 返回整数 42，忽略传入的参数。
    return 42;
}

// 主函数 `main`，程序的入口点。
int main()
{
    // 调用 `func` 函数，传入参数 1 和 2，并将返回值赋给变量 `result`。
    // `result` 使用花括号初始化，这是 C++11 引入的列表初始化语法。
    int result{ func(1, 2) };

    // `main` 函数默认返回 0，表示程序正常结束。
}