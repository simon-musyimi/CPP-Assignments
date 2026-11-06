#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    string name;
    string account_Number;
    double balance;

    public:
    BankAccount(string n, string num, double b){
        name=n;
        account_Number=num;
        balance=b;

        cout<<"Account created successfully."<<endl; 
    }

    void displayAccount(){
        cout<<"Account Holder: "<<name<<endl;
        cout<<"Account Number: "<<account_Number<<endl;
        cout<<"account balance: "<<balance<<endl;
    }
    ~BankAccount(){
        cout<<"Account closed successfully."<<endl;
    }
};

int main(){
    BankAccount acc("simon","45890",10000);

    acc.displayAccount();
    
    return 0;
}