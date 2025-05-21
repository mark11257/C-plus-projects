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
    for (Room room : rooms) {
        room.displayRoom();
        cout << "\n";
        }
    }
    
};