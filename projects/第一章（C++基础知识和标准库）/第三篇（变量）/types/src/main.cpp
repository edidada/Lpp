// 导入标准库
import std;

int main()
{
    // 有符号整数类型
    // 使用 int 类型初始化，值为 -7
    int i1 = -7;

    // 使用 signed int 类型初始化，值为 -6
    signed int i2 = -6;

    // 使用 signed 类型初始化，值为 -5
    signed i3 = -5;

    // 短整型（short）
    // 使用 short 类型初始化，值为 13
    short s1 = 13;

    // 使用 short int 类型初始化，值为 14
    short int s2 = 14;

    // 使用 signed short 类型初始化，值为 15
    signed short s3 = 15;

    // 使用 signed short int 类型初始化，值为 16
    signed short int s4 = 16;

    // 长整型（long）
    // 使用 long 类型初始化，值为 -7
    long l = -7L;

    // 长长整型（long long）
    // 使用 long long 类型初始化，值为 14
    long long ll = 14LL;

    // 无符号整数类型
    // 使用 unsigned int 类型初始化，值为 2
    unsigned int ui = 2U;

    // 使用 unsigned 类型初始化，值为 5
    unsigned uj = 5U;

    // 使用 unsigned short 类型初始化，值为 23
    unsigned short us = 23U;

    // 使用 unsigned long 类型初始化，值为 5400
    unsigned long ul = 5400UL;

    // 使用 unsigned long long 类型初始化，值为 140
    unsigned long long ull = 140ULL;

    // 浮点数类型
    // 使用 float 类型初始化，值为 7.2
    float f = 7.2f;

    // 使用 double 类型初始化，值为 7.2
    double d = 7.2;

    // 使用 long double 类型初始化，值为 16.98
    long double ld = 16.98L;

    // 字符类型
    // 使用 char 类型初始化，值为字符 'm'
    char ch = 'm';

    // 使用 char8_t 类型初始化，值为 UTF-8 编码的字符 'm'
    char8_t c8 = u8'm';

    // 使用 char16_t 类型初始化，值为 UTF-16 编码的字符 'm'
    char16_t c16 = u'm';

    // 使用 char32_t 类型初始化，值为 UTF-32 编码的字符 'm'
    char32_t c32 = U'm';

    // 使用 wchar_t 类型初始化，值为宽字符 'm'
    wchar_t w = L'm';

    // 布尔类型
    // 使用 bool 类型初始化，值为 true
    bool b1 = true;

    // 字节类型（std::byte）
    // 使用 std::byte 类型初始化，值为 42
    std::byte b2{ 42 };

    return 0;  // 返回 0，表示程序正常结束
}