//c++ program to illustrate call-by methods
#include <bits/stdc++.h>
using namespace std;

//pass by value
int square(int n){
    //address of n in square 1() is not  the same as n1 in //main()
    cout << "address of n in square1():" << &n << "\n";
    
    n *= n;
    return n;
}

//pass by reference with pointer arguements
void square2(int *n){
    //address of n in square2() is the same as n1 in main()
    cout << "address of n in square2():" << n << "\n";
    

    //dereference to get the value pointed to by
    *n *= *n;
}

void square3(int& n){
    //address of n in square3() is the same as n1 in main()
    cout << "address of n in square3():" << &n << "\n";
    //implementing the dereferencing without the (*)
    n *= n;
}


void geeks(){
    //call by value
    int n1 = 8;
    cout << " address of n1 in main(): " << &n1 << "\n";
    cout <<"Square of n1: " << square(n1)<< "\n";
    cout <<" No change in n1: " << n1 << "\n";



    //call by reference with pointer arguements
    int n2 = 8;
    cout << " address of n2 in main(): " << &n2 << "\n";
    square2(&n2);
    cout <<"Square of n2: " << n2 << "\n";
    cout <<" n2 changed: " << n2 << "\n";



    //call by reference with reference arguements
    int n3 = 8;
    cout << " address of n3 in main(): " << &n3 << "\n";
    square3(n3);
    cout <<"Square of n3: " << n3 << "\n";
    cout <<" n3 changed: " << n3 << "\n";
}

int main(){
    geeks();
    return 0;
}


