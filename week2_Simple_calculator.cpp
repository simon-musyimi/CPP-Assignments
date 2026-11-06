#include<iostream>
#include<string>
using namespace std;

int main(){
    double num1, num2,result;
    char op;

    cout<<"Enter first number: "<<endl;
    cin>> num1;

    cout<<"Enter operator: "<<endl;
    cin>> op;

    cout<<"Enter second number: "<<endl;
    cin>> num2;

    switch(op){
        case '+':
        result=num1+num2;
        cout<<"Result: "<<result<<endl;
        break;
        
    case '-':
    result=num1-num2;
    cout<<"Result: "<<result<<endl;
    break;

    case '*':
    result=num1*num2;
    cout<<"Result: "<<result<<endl;
    break;

    case '/':
    if(num2 !=0){
        result=num1/num2;
        cout<<"Result: "<<result<<endl;
    }else{
        cout<<"Error: Division by zero is impossible."<<endl;
    }
    break;
    default:
    cout<<"Invalid operator."<<endl;
    }
    return 0;
}
