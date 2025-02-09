import std;  // 导入C++23标准库模块

using namespace std;  // 使用标准命名空间

// 定义一个函数，返回一个optional<int>，表示可能包含一个int值或不包含任何值
optional<int> getData(bool giveIt)
{
    if (giveIt) {  // 如果giveIt为true
        return 42;  // 返回一个包含42的optional<int>
    }

    return nullopt;  // 否则返回一个空的optional<int>，表示没有值
}

int main()
{
    optional<int> data1{ getData(true) };  // 调用getData(true)，返回包含42的optional<int>，并初始化data1
    optional<int> data2{ getData(false) };  // 调用getData(false)，返回空的optional<int>，并初始化data2

    // 打印data1是否包含值
    println("data1.has_value = {}", data1.has_value());

    // 检查data2是否为空，如果为空则打印消息
    if (!data2) {
        println("data2 has no value.");
    }

    // 打印data1的值，使用value()方法获取值
    println("data1.value = {}", data1.value());

    // 打印data1的值，使用解引用操作符*获取值
    println("data1.value = {}", *data1);

    try {
        // 尝试打印data2的值，如果data2为空，则会抛出bad_optional_access异常
        println("data2.value = {}", data2.value());
    } catch (const bad_optional_access& ex) {
        // 捕获并处理bad_optional_access异常，打印异常信息
        println("Exception: {}", ex.what());
    }

    // 打印data2的值，如果data2为空，则返回默认值0
    println("data2.value = {}", data2.value_or(0));
}