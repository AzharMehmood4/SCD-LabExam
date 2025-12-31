#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    Employee() {
        salary = 50000;
    }

    int getSalary() {
        return salary;
    }

    int calculateSalary(int bonus) {
        return getSalary() + bonus;
    }
};

int main() {
    Employee emp;
    int totalSalary = emp.calculateSalary(5000);
    cout << "Total Salary: " << totalSalary << endl;
    return 0;
}
