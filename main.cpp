#include <iostream>
#include <cmath>
using namespace std;

int main(){       
    int array[9]={1,2,3,4,5,6,7,8};
    array[8]=9;
    for (unsigned int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        cout<<array[i]<<" ";
    }
    
    
}

