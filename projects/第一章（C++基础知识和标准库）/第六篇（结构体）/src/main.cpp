// 导入标准库
import std;
// 导入 'employee' 模块，其中包含了 'Employee' 结构体
import employee;

// 使用标准命名空间，以避免每次都写 std::
using namespace std;

int main() {
    // 创建一个 'Employee' 结构体的实例
    Employee anEmployee;

    // 设置员工的名字首字母
    anEmployee.firstInitial = 'J';
    // 设置员工的姓氏首字母
    anEmployee.lastInitial = 'D';
    // 设置员工编号
    anEmployee.employeeNumber = 42;
    // 设置员工工资
    anEmployee.salary = 80000;

    // 打印员工的名字和姓氏首字母
    println("员工名字和姓氏首字母: {}{}", anEmployee.firstInitial,
            anEmployee.lastInitial);

    // 打印员工编号
    println("员工编号: {}", anEmployee.employeeNumber);

    // 打印员工工资
    println("员工工资: ${}", anEmployee.salary);
}
