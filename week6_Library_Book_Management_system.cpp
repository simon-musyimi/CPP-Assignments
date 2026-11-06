#include<iostream>
#include<string>
using namespace std;

class Book{
    string title, author;
    int copies;

    public:
    void inputDetails(){
        cout<<"Enter book title: ";
        cin>> title;

        cout<<"Enter author: ";
        cin>> author;

        cout<<"Enter available copies: ";
        cin>> copies;
    }

    void borrowBook(){
        if(copies>0){
            cout<<"Book borrowed successfully."<<endl;
        }else{
            cout<<"No copies available."<<endl;
        }
    }

    void displayDetails(){
        cout<<"Book Title: "<<title<<endl;
        cout<<"Author: "<<title<<endl;
        cout<<"Available Copies: "<<copies<<endl;
    }
};

    int main(){
        Book b;

        b.inputDetails();
        b.borrowBook();
        b.displayDetails();

        return 0;
    }

