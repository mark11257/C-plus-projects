using namespace std;
#include <iostream>
#include "hotel.cpp"
int main(){
   Hotel hotel;
   hotel.addRoom(5,500,"single");
   hotel.displayRooms();
    return 0;
}









/*  bool condition;
    Room room(1,1000,"single");
    //room.displayRoom();
    condition = room.isBooked();
    cout<<(condition? "booked\n":"not booked\n")<<endl;
    room.BookRoom();
    condition = room.isBooked();
    cout<<(condition? "booked\n":"not booked\n")<<endl;
    room.cancelBook();
    condition = room.isBooked();
    cout<<(condition? "booked\n":"not booked\n")<<endl;
    int n= room.getRoomNumber();
    double p= room.getRoomPrice();
    string a = room.getRoomType();
     cout<<n<<endl<<p<<endl<<a<<endl; */