#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string student_name;
    string admission_number;
    double fee_balance;

    public:
    void inputStudentData(){
        cout<<"Enter student name: "<<endl;
        cin>> student_name;

        cout<<"Enter admission number: "<<endl;
        cin>> admission_number;
        
        cout<<"Enter fee balance: "<<endl;
        cin>> fee_balance;
    }
    void makePayment(){
        double payment;
        cout<<"Enter amount to be paid: "<<endl;
        cin>> payment;

        if(payment>0 && payment<=fee_balance){
            fee_balance=fee_balance-payment;
            cout<<"Payment successful."<<endl;
        }else{
            cout<<"Payment failed."<<endl;
        }
    }
    void displayStatus(){
        cout<<"Student Name: "<<student_name<<endl;
        cout<<"Admission Number: "<<admission_number<<endl;
        cout<<"Fee Balance: "<<fee_balance<<endl;
    }
};

int main(){
    Student s;
    
    s.inputStudentData();
    s.makePayment();
    s.displayStatus();

    return 0;
}