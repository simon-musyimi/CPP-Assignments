#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string name;
    string employee_ID;
    double basic_salary;

    public:
    void setEmployeeDetails(){
        cout<<"Enter employee name: "<<endl;
        cin>> name;

        cout<<"Enter employee ID: "<<endl;
        cin>> employee_ID;

        cout<<"Enter basic salary: "<<endl;
        cin>> basic_salary;
    }
    double calculateSalary(){
        return basic_salary+(0.10*basic_salary);
    }
    void displayEmployeeDetails(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<employee_ID<<endl;
        cout<<"Basic Salary: "<<basic_salary<<endl;
        cout<<"Net Salary: "<<calculateSalary()<<endl;
    }
};

int main(){
    Employee emp;

    emp.setEmployeeDetails();
    emp.displayEmployeeDetails();

    return 0;
}