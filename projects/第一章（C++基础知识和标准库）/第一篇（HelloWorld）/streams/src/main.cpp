import std;  // 导入标准库模块

int main()
{
    // 使用 std::cout 输出字符串 "There are "，接着输出整数 219，最后输出字符串 " ways I love you."，并以换行符结束
    std::cout << "There are " << 219 << " ways I love you." << std::endl;

    // 使用 C++20 新福的 std::format 函数格式化字符串，将 219 插入到占位符 {} 中，然后通过 std::cout 输出结果，并以换行符结束
    std::cout << std::format("There are {} ways I love you.", 219) << std::endl;

    return 0;  // 返回 0，表示程序正常结束
}