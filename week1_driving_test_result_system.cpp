#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string student_name;
    string test_results;
    int theory_marks;
    int practical_marks;
    float average_score;
    

    cout<<"Enter your name: "<<endl;
    cin>>student_name;

    cout<<"Enter theory marks: "<<endl;
    cin>>theory_marks;

    cout<<"Enter practical marks: "<<endl;
    cin>>practical_marks;

    average_score = (theory_marks + practical_marks) / 2.0;
    cout<<"Average score: "<<average_score<<endl;

    if(average_score>=50) {
        test_results= "pass";
    }else {
        test_results= "fail";
    }

    cout<<"DRIVING TEST RESULTS"<<endl;
    cout<<"============================="<<endl;
    cout<<"Student Name: "<<student_name<<endl;
    cout<<"Theory Marks: "<<theory_marks<<endl;
    cout<<"Practical Marks: "<<practical_marks<<endl;
    cout<<"Average Score: "<<average_score<<endl;
    cout<<"Final Result: "<<test_results<<endl;

    return 0;

}