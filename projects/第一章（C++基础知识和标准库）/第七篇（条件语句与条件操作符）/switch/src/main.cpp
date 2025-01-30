int main()
{
    // 定义一个枚举类 Mode，包含三个枚举值：Default, Custom, Standard
    enum class Mode { Default, Custom, Standard };

    // 定义一个整型变量 value，并初始化为 42
    int value{ 42 };

    // 定义一个 Mode 类型的变量 mode，并初始化为 Mode::Custom
    Mode mode{ Mode::Custom };

    // 使用 switch 语句根据 mode 的值进行分支处理
    switch (mode) {
        // 使用 using enum Mode; 引入枚举值，使得在 case 语句中可以直接使用枚举值而不需要写 Mode::
        using enum Mode;

        // 如果 mode 是 Custom，执行以下代码
        case Custom:
            // 将 value 的值设置为 84
                value = 84;
        // 使用 [[fallthrough]] 属性，表示故意不写 break，继续执行下一个 case 的代码
        [[fallthrough]];

        // 如果 mode 是 Standard 或 Default，执行以下代码
        case Standard:
        case Default:
            // 在这里可以对 value 进行处理
            // Do something with value ...
            // 跳出 switch 语句
            break;
    }
}