
#include <iostream>
#include <string>
using namespace std;

string employeeName;
double basic_Salary, overtime_Hours, rate_Per_Hour;
double overtimePay, netSalary;

void getEmployeeDetails() {
    cout << "Enter employee name: ";
    cin>>employeeName;

    cout << "Enter basic salary: ";
    cin >> basic_Salary;

    cout << "Enter overtime hours: ";
    cin >> overtime_Hours;

    cout << "Enter overtime rate per hour: ";
    cin >> rate_Per_Hour;
}

void calculateOvertimePay() {
    overtimePay = overtime_Hours * rate_Per_Hour;
}

void calculateNetSalary() {
    netSalary = basic_Salary + overtimePay;
}

void displayPayslip() {
    cout << "\n====== EMPLOYEE PAYSLIP ======\n";
    cout << "Employee Name: " << employeeName << endl;
    cout << "Basic Salary: KSh " << basic_Salary << endl;
    cout << "Overtime Hours: " << overtime_Hours << endl;
    cout << "Overtime Pay: KSh " << overtimePay << endl;
    cout << "Net Salary: KSh " << netSalary << endl;
    cout << "==============================\n";
}

int main() {
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();

    return 0;
}
