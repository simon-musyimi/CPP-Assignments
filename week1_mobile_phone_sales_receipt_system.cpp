#include <iostream>
#include<string>
using namespace std;

int main()
{
    string customer_name;
    string model;
    int quantity;
    float price_per_phone;
    float total_sales;

    cout<<"Enter your name: "<<endl;
    cin>>customer_name;

    cout<<"Enter phone model: "<<endl;
    cin>>model;

    cout<<"Enter quantity purchased: "<<endl;
    cin>>quantity;

    cout<<"Enter price_per_phone: "<<endl;
    cin>>price_per_phone;

    total_sales=quantity*price_per_phone;


    cout<<"SALES RECEIPT" << endl;
    cout<<"==========" << endl;
    cout<<"Customer Name: " <<customer_name<<endl;
    cout<<" Phone Model: " << model << endl;
    cout<<" Quantity purchased: " << quantity << endl;
    cout<<" price per Phone: " << price_per_phone << endl;
    cout<<"==========" << endl;
    cout<<"TOTAL SALES" << total_sales << endl;
    cout<< "==========" << endl;

    return 0;
}
