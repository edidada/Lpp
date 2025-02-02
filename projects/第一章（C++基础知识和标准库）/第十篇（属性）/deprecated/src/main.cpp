// 标记函数为弃用（deprecated），并提供一个提示信息，建议使用替代函数
[[deprecated("Unsafe function, please use xyz")]] void func() {}

// 主函数
int main()
{
    // 调用被标记为弃用的函数
    func();
}