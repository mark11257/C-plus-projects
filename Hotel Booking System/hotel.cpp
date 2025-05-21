using namespace std;
#include <string>
#include <vector>
#include "room.cpp"
class Hotel {
private:
    vector<Room> rooms;
    string customerName;
public:
    Hotel(){}
    void addRoom(int roomNumber, double roomPrice, string roomType){
        Room room(roomNumber,roomPrice,roomType);
        rooms.push_back(room);
        cout<<"Room "<<room.getRoomNumber()<<" Added succesfully\n";
    }
    void displayRooms() {
        bool flag=false;
        for(Room& room : rooms){
            room.displayRoom();
            flag=true;
        }
        if(!flag)
            cout<<"there are no rooms in the hotel\n";
    }

    void searchRoom(int number){
        bool foundRoom=false;
        for(Room& room:rooms){
            if(number == room.getRoomNumber()){
                room.displayRoom();
                foundRoom=true;
                break;
            }
        }
        if(!foundRoom)
            cout<<"Room Requested is not Listed\n";
    }

    bool bookRoom(int number){
        bool bookedRoom=false;
        for(Room& room:rooms){
            if(number == room.getRoomNumber() && !room.isBooked()){
                room.BookRoom();
                bookedRoom=true;
                break;
            }
        }
        if(!bookedRoom)
            cout<<"Could not book the room, Either room is already booked or not found\n";
        return bookedRoom;
    }

   void showAvailableRooms(){
    int countAvailableRooms = 0;
    for(Room& room:rooms){
        if(!room.isBooked()){
            countAvailableRooms++;
            cout<<"Room Number "<<room.getRoomNumber()<<" is Available\n";
        }  
    }
     cout<<countAvailableRooms<<" Rooms are Available to Book.\n";
   }




};