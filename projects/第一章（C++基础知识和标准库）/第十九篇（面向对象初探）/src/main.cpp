// 导入标准库模块
import std;

// 导入 airline_ticket 模块
import airline_ticket;

// 使用标准命名空间
using namespace std;

// main 函数，程序入口
int main()
{
    // 创建一个栈上的 AirlineTicket 对象
    AirlineTicket myTicket;  // 基于栈的 AirlineTicket 对象

    // 设置乘客姓名为 "Sherman T. Socketwrench"
    myTicket.setPassengerName("Sherman T. Socketwrench");

    // 设置里程数为 800
    myTicket.setNumberOfMiles(800);

    // 计算机票价格并存储到 cost 变量中
    double cost{ myTicket.calculatePriceInDollars() };

    // 打印机票价格
    println("This ticket will cost ${}", cost);
}