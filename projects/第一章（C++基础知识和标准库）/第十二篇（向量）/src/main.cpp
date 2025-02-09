// 导入标准库中的所有模块
import std;

// 使用标准命名空间，避免每次调用标准库函数时都要加std::前缀
using namespace std;

// 主函数，程序的入口点
int main()
{
    // 创建一个包含整数的vector，并初始化两个元素：11和22
    vector<int> myVector{ 11, 22 };
    // 也可以使用CTAD（类模板参数推导）来创建vector，编译器会自动推导类型
    // vector myVector { 11, 22 };  // 使用CTAD

    // 使用push_back()方法向vector中添加更多的整数
    myVector.push_back(33);  // 添加33到vector的末尾
    myVector.push_back(44);  // 添加44到vector的末尾

    // 访问vector中的元素，并打印第一个元素
    println("1st element: {}", myVector[0]);  // 打印第一个元素，即11
}