#include<iostream>
#include<string>
using namespace std;

int main()
{
    string student_name;
    string grade;
    float exam_marks;

    cout<<"Enter your name: "<<endl;
    cin>>student_name;

    cout<<"Enter exam_marks: "<<endl;
    cin>>exam_marks;

    if(exam_marks>=70){
        grade="A";
    }else
        if(exam_marks>=60&& exam_marks<=69){
            grade="B";
    }else
    if(exam_marks>=50&&exam_marks<=59){
        grade="C";
    }else
    if(exam_marks>=40&&exam_marks<=49){
        grade="D";
    }else
    grade="E";


    cout<<"EXAM RESULTS"<<endl;
    cout<<"=============="<<endl;
    cout<<"Student Name: "<<student_name<<endl;
    cout<<"Grade: "<<grade<<endl;
    cout<<"Marks: "<<exam_marks<<endl;

    return 0;

}
