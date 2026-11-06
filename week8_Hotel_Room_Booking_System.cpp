#include<iostream>
#include<string>
using namespace std;

class RoomBooking{
    string guest_Name;
    int room_number;
    int days_booked;

    public:
    RoomBooking(string name, int room, int days){
        guest_Name=name;
        room_number=room;
        days_booked=days;

        cout<<"Room booking confirmed."<<endl;
    }

    void displayBooking(){
        cout<<"Guest Name: "<<guest_Name<<endl;
        cout<<"Room Number: "<<room_number<<endl;
        cout<<"Days Booked: "<<days_booked<<endl;
    }

    ~RoomBooking(){
        cout<<"Booking ended, room released."<<endl;
    }
};

int main(){
    RoomBooking booking("Sam",30,7);

    booking.displayBooking();

    return 0;
}