#include<iostream>
#include<string>
using namespace std;

class Student{
    string student_name, admission_no;
    double balance;

    public:
    void inputStudent(){
        cout<<"Enter student name: "<<endl;
        cin>> student_name;

        cout<<"Enter admission number: "<<endl;
        cin>> admission_no;

        cout<<"Enter fee balance: "<<endl;
        cin>>balance;
    }

    void makePayment(){
        double payment;

        cout<<"Enter amount to be paid: "<<endl;
        cin>> payment;

        if(payment>0 && payment<= balance){
            balance=balance-payment;
            cout<<"Payment successful."<<endl;
        }else{
            cout<<"Invalid payment amount."<<endl;
        }
    }

    void displayStatus(){
        cout<<"Student Name: "<<student_name<<endl;
        cout<<"Admission Number: "<<admission_no<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    Student s;
    
    s.inputStudent();
    s.makePayment();
    s.displayStatus();

    return 0;
}