using namespace std;
#include <iostream>
#include "room.cpp"
int main(){
    bool condition;
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
    return 0;
}