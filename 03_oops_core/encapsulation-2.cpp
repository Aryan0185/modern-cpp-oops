#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    double salary;

public:
    // Setter for id
    void setId(int i) {
        id = i;
    }

    // Setter for salary (with validation)
    void setSalary(double s) {
        if (s >= 0) {
            salary = s;
        } else {
            salary = 0; // prevent negative salary
        }
    }

    // Getter for id
    int getId() {
        return id;
    }

    // Getter for salary
    double getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;

    emp.setId(101);
    emp.setSalary(50000);

    cout << "Employee ID: " << emp.getId() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;

    return 0;
}
