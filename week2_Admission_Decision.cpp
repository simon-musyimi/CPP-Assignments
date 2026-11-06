#include<iostream>
#include<string>
using namespace std;

int main(){
    string student_name;
    int age;
    double score;

    cout<<"Enter student name: "<<endl;
    cin>> student_name;

    cout<<"Enter student age: "<<endl;
    cin>> age;

    cout<<"Enter the score: "<<endl;
    cin>> score;

    

    cout<<"Student Name: "<<endl;

    if(age>=18){
        if(score>=50){
            cout<<"Admission Decision: Admitted."<<endl;
        }else{
            cout<<"Admission Decision: Not Admitted: Low Score."<<endl;
        }
        }else{
            cout<<"Admission Decision: Not Admitted: Underage."<<endl;
        }  
    return 0;
}