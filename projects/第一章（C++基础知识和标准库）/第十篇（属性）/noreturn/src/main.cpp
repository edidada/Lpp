// 导入C++23标准库模块
import std;

// 使用标准命名空间
using namespace std;

// 定义一个不会返回的函数，用于强制终止程序
[[noreturn]] void forceProgramTermination()
{
    // 调用exit函数终止程序，返回状态码1
    exit(1);
}

// 定义一个函数，检查Dongle是否可用
bool isDongleAvailable()
{
    // 初始化Dongle可用状态为false
    bool isAvailable{ false };
    // 返回Dongle的可用状态
    return isAvailable;
}

// 定义一个函数，检查特定功能是否已授权
bool isFeatureLicensed(int featureId)
{
    // 检查Dongle是否可用
    if (!isDongleAvailable()) {
        // 如果Dongle不可用，强制终止程序
        forceProgramTermination();
    } else {
        // 如果Dongle可用，检查功能是否已授权
        bool isLicensed{ featureId == 42 };
        // 返回功能授权状态
        return isLicensed;
    }
}

// 主函数
int main()
{
    // 检查功能42是否已授权
    bool isLicensed{ isFeatureLicensed(42) };
    // 打印授权状态
    println("{}", isLicensed);
}