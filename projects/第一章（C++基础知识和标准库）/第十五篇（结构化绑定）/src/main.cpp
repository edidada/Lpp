// 导入标准库模块
import std;

// 使用标准命名空间
using namespace std;

int main() { {
        // 使用 std::array 进行结构化绑定
        // 创建一个包含三个整数的 std::array
        array values{11, 22, 33};
        // 使用结构化绑定将数组元素分解为变量 x, y, z
        auto [x, y, z]{values};
    } {
        // 使用结构体进行结构化绑定
        // 定义一个包含三个 double 成员的结构体
        struct Point {
            double m_x, m_y, m_z;
        };
        // 创建 Point 结构体的实例
        Point point;
        // 为结构体成员赋值
        point.m_x = 1.0;
        point.m_y = 2.0;
        point.m_z = 3.0;
        // 使用结构化绑定将结构体成员分解为变量 x, y, z
        auto [x, y, z]{point};
    } {
        // 使用 std::pair 进行结构化绑定
        // 创建一个包含字符串和整数的 std::pair
        pair myPair{"hello", 5};
        // 使用结构化绑定将 pair 的成员分解为变量 theString 和 theInt
        auto [theString, theInt]{myPair};
        // 打印 theString 的值
        println("theString: {}", theString);
        // 打印 theInt 的值
        println("theInt: {}", theInt);
    }
}
