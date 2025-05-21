using namespace std;
#include <iostream>
#include <string> 
class Room {
private:
    int number;
    bool Booked;
    double price;
    string type;
public:
     Room(int number,double price,string type){
        setRoomNumber(number);
        setRoomPrice(price);
        setRoomType(type);
        this->Booked = false;
    }
    void  setRoomNumber(int number){
        this->number = number;
    }
    void  setRoomPrice(double price){
        this->price = price;
    }
    void  setRoomType(string type){
        if(type == "single" || type == "double")
            this->type = type;
        else
            this->type = "N/A";
    }
    int getRoomNumber(){
        return this->number;
    }
    string getRoomType(){
        return this->type;
    }
    double getRoomPrice(){
        return this->price;
    }
    void BookRoom(){
        this->Booked = true;
    }
    bool isBooked(){
        return this->Booked;
    }
    void cancelBook(){
         this->Booked = false;        
    }
    void displayRoom(){
        cout << "Room number: " << this->number << "\n"
        << "Room type: " << this->type << "\n"
        << "Room price: " << this->price << "$\n"
        << "Room status: " << (this->Booked ? "Booked" : "Available\n")
        <<endl;
    }
};