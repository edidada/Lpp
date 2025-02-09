import std;  // 导入标准库模块（C++23 特性）

using namespace std;  // 使用标准命名空间

int main()
{
    {
        // while 循环
        int i{ 0 };  // 初始化变量 i 为 0
        while (i < 5) {  // 当 i 小于 5 时执行循环
            println("This is silly.");  // 打印 "This is silly."
            ++i;  // i 自增 1
        }
    }

    println("");  // 打印空行

    {
        // do...while 循环
        int i{ 100 };  // 初始化变量 i 为 100
        do {  // 先执行循环体
            println("This is silly.");  // 打印 "This is silly."
            ++i;  // i 自增 1
        } while (i < 5);  // 当 i 小于 5 时继续循环
    }

    println("");  // 打印空行

    {
        // 标准 for 循环
        for (int i{ 0 }; i < 5; ++i) {  // 初始化 i 为 0，当 i 小于 5 时执行循环，每次循环后 i 自增 1
            println("This is silly.");  // 打印 "This is silly."
        }
    }

    println("");  // 打印空行

    {
        // 基于范围的 for 循环（增加 for）
        array arr{ 1, 2, 3, 4 };  // 初始化数组 arr 为 {1, 2, 3, 4}
        for (int i : arr) {  // 遍历数组 arr 中的每个元素
            println("{}", i);  // 打印当前元素的值
        }
    }

    println("");  // 打印空行

    {
        // 带初始化器的基于范围的 for 循环
        for (array arr{ 1, 2, 3, 4 }; int i : arr) {  // 在循环中初始化数组 arr，并遍历其中的每个元素
            println("{}", i);  // 打印当前元素的值
        }
    }
}