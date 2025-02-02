// 引入标准库
import std;

// 使用标准命名空间
using namespace std;

int main()
{
    // 声明一个包含3个元素的整数数组，并初始化
    array<int, 3> arr{ 9, 8, 7 };

    // 你也可以使用 CTAD（类型推导）来简化数组声明，如下
    // array arr{ 9, 8, 7 };  // Using CTAD

    // 输出数组的大小
    println("Array size = {}", arr.size());

    // 输出数组的第二个元素（索引从0开始）
    println("2nd element = {}", arr[1]);
}
