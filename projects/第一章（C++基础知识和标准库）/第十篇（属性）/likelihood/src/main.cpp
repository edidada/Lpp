// 主函数
int main()
{
    // 定义一个整型变量 value，并初始化为 4
    int value{ 4 };

    // 检查 value 是否大于 11
    if (value > 11) [[unlikely]] {  // [[unlikely]] 提示编译器，条件为真的可能性很低
        // 如果 value 大于 11，执行此代码块
    }
    else {  // 否则执行 else 代码块
        // 如果 value 不大于 11，执行此代码块
    }

    // 使用 switch 语句根据 value 的值进行分支
    switch (value)
    {
        [[likely]] case 1:  // [[likely]] 提示编译器，此 case 的可能性较高
            // 如果 value 等于 1，执行此代码块
                break;  // 跳出 switch 语句

        case 2:  // 如果 value 等于 2
            // 执行此代码块
                break;  // 跳出 switch 语句

        [[unlikely]] case 12:  // [[unlikely]] 提示编译器，此 case 的可能性较低
            // 如果 value 等于 12，执行此代码块
                break;  // 跳出 switch 语句
    }
}