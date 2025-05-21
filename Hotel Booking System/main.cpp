using namespace std;
#include <iostream>
#include "hotel.cpp"
 Hotel hotel;
void addRoom(int roomNumber,double roomPrice,string roomType);
void searchRoom(int roomNumber);
bool bookRoom(int roomNumber);

int main(){
    int n;
  cout<<"Welcome to our Hotel!\n";
  while (true)
  { 
    cout<<endl;
    cout<<"What would you Like to do?\n"
    <<"1 -> add a Room new room to the Hotel\n"
    <<"2 -> Search for a room with its number\n"
    <<"3 -> Book a Room \n"
    <<"4 -> show all available rooms to book\n"
    <<"5 -> Display all the Rooms in the Hotel\n"
    <<"0 -> Exit the menu\n"
    <<"Choose a number from the menu: ";
    cin>>n;
    cout<<endl;
    switch (n)
    {
        case 0:{
            cout<<"Thank you for choosing our Hotel.";
            return 0;
            }
        case 1:{
            int number;
            double price;
            string type;
            cout<<"Enter room number: ";
            cin>>number;
            cout<<"Enter room price: ";
            cin>>price;
            cout<<"Enter Room type: ";
            cin>>type;
            addRoom(number, price, type);
            break;
        }
        case 2:{
            int numberRoom;
            cin>>numberRoom;
            searchRoom(numberRoom);
            break;
        }
        case 3:{
            int numberRoom;
            bool booked;
            cin>>numberRoom;
            booked = bookRoom(numberRoom);
            if(booked)
                cout<<"Room "<<numberRoom<<" booked successfuly.";
            break;
        }
        case 4:{
            hotel.showAvailableRooms();
            break;
        }
        case 5:{
            hotel.displayRooms();
            break;
        }
        default:{
            cout<<"Please select a correct number from the menu";
            break;
        }
    }
  }
  
   
    return 0;
}

void addRoom(int roomNumber, double roomPrice, string roomType){
    hotel.addRoom(roomNumber,roomPrice,roomType);
}

void searchRoom(int roomNumber){
    hotel.searchRoom(roomNumber);
}
bool bookRoom(int roomNumber){
    return hotel.bookRoom(roomNumber);
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


