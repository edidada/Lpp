import std;
#include <sqlite3.h>

int
main() {
    auto lang = "C++ 23";
    std::println("Hello and welcome to {}！", lang);
    for (int i = 1; i <= 5; i++) {
        std::println("i = {}", i);
    }
    std::println(SQLITE_VERSION);
    std::println("完成。");
    std::system("pause");
    return 0;
}
