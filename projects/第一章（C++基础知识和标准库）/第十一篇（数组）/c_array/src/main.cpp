import std;  // 导入标准库模块（C++23 特性）

int main()
{
    {
        // 声明一个包含3个整数的数组
        int myArray[3];

        // 将数组的第一个元素初始化为0
        myArray[0] = 0;

        // 将数组的第二个元素初始化为0
        myArray[1] = 0;

        // 将数组的第三个元素初始化为0
        myArray[2] = 0;
    }

    {
        // 声明并初始化一个包含3个整数的数组，所有元素初始化为0
        int myArray[3] = { 0 };
    }

    {
        // 声明并初始化一个包含3个整数的数组，所有元素默认初始化为0
        int myArray[3] = {};
    }

    {
        // 声明并初始化一个包含3个整数的数组，所有元素默认初始化为0（使用花括号初始化）
        int myArray[3]{};
    }

    {
        // 声明并初始化一个数组，编译器根据初始化列表自动推断数组大小为4
        int myArray[]{ 1, 2, 3, 4 };
    }

    {
        // 声明并初始化一个包含3个整数的数组，第一个元素初始化为2，其余元素初始化为0
        int myArray[3]{ 2 };

        // 使用std::size获取数组的大小（C++17 特性）
        std::size_t arraySize1{ std::size(myArray) };

        // 使用sizeof计算数组的大小
        std::size_t arraySize2{ sizeof(myArray) / sizeof(myArray[0]) };
    }

    {
        // 声明一个3x3的二维字符数组
        char ticTacToeBoard[3][3];

        // 将二维数组的中心元素设置为字符'o'
        ticTacToeBoard[1][1] = 'o';
    }
}