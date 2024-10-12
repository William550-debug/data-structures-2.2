#include <iostream>
using namespace std;

void swap (int *a , int *b ){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){
    int x, y;
    x = 7;
    y = 9;
    
    cout<<"Before swap: x= "<<x<<", y= "<<y;
    swap(&x, &y);
    
    cout<<"After swap: x= "<<x<<", y= "<<y;
    return 0;
    
}