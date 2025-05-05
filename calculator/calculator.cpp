#include <iostream>
#include <cmath>
using namespace std;

float Add(double num1,double num2){
    return num1 + num2;
}

float subtract(double num1,double num2){
    return num1 - num2;
}
float multiply(double num1,double num2){
    return num1 * num2;
}
float divide(double num1,double num2){
    return num1 / num2;
}
int main(){
    double number1,number2,result;
    char operation;
    cout<<"Welcome to my calculator\nwhat operation would you like to perform?\n";
    cin>>operation;
    cout<<"please enter the first number: ";
    cin>>number1;
    cout<<"Please enter the second number: ";
    cin>>number2;
    if(operation == '+' )
    {
        result= Add(number1,number2);
    }else if (operation == '-')
    {
        result= subtract(number1,number2);
    }else if (operation == '*')
    {
        result= multiply(number1,number2);
    }else if (operation == '/')
    {
        result= divide(number1,number2);
    }else
    {
        cout<<"Please enter a valid operation next time";
        return -1;
    }
    
    cout<<"The result is: "<<result;
    
}


/*
 string functions
 ----------------
 - to input string we use getline(cin, variable)
 .length()
 variable[0] deal with string as an array
 .find(string, where to start looking)
 .substr(where to start moving, move for how long)

 math functions
 --------------
 pow()
 sqrt()
 round()
 fmax() find max between 2 numbers
 fmin() find min between 2 numbers
*/ 