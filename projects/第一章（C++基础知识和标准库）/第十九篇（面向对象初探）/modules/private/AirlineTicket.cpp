module airline_ticket;

using namespace std;

// AirlineTicket 类定义
// 该类表示一张航空机票，包含乘客信息和奖励状态。

// AirlineTicket 构造函数
// 初始化乘客姓名为 "Unknown Passenger"，里程数为 0，精英状态为 false。
// AirlineTicket::AirlineTicket()
//	: m_passengerName{ "Unknown Passenger" }
//	, m_numberOfMiles{ 0 }
//	, m_hasEliteSuperRewardsStatus{ false }
//{
//}

// AirlineTicket 析构函数
// 该类无需清理操作。
// AirlineTicket::~AirlineTicket()
//{
//	// 无需进行任何清理操作
//}

// calculatePriceInDollars 函数
// 根据里程数和精英状态计算机票价格。
double AirlineTicket::calculatePriceInDollars()
{
    // 检查乘客是否具有精英超级奖励状态
    if (hasEliteSuperRewardsStatus()) {
        // 精英超级奖励客户免费飞行！
        return 0;
    }

    // 机票价格为里程数乘以 0.1。
    // 实际航空公司的计算方式可能更复杂！
    return getNumberOfMiles() * 0.1;
}

// getPassengerName 函数
// 返回乘客的姓名。
string AirlineTicket::getPassengerName()
{
    return m_passengerName;
}

// setPassengerName 函数
// 设置乘客的姓名。
void AirlineTicket::setPassengerName(string name)
{
    m_passengerName = name;
}

// getNumberOfMiles 函数
// 返回里程数。
int AirlineTicket::getNumberOfMiles()
{
    return m_numberOfMiles;
}

// setNumberOfMiles 函数
// 设置里程数。
void AirlineTicket::setNumberOfMiles(int miles)
{
    m_numberOfMiles = miles;
}

// hasEliteSuperRewardsStatus 函数
// 返回乘客是否具有精英超级奖励状态。
bool AirlineTicket::hasEliteSuperRewardsStatus()
{
    return m_hasEliteSuperRewardsStatus;
}

// setHasEliteSuperRewardsStatus 函数
// 设置乘客的精英超级奖励状态。
void AirlineTicket::setHasEliteSuperRewardsStatus(bool status)
{
    m_hasEliteSuperRewardsStatus = status;
}