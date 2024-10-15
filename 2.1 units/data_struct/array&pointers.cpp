#include <bits/stdc++.h>
using   namespace std;

void geeks(){

    //declare an array 
    int val[3] = {5 , 10 , 40};

    //declare a pointer variable
    int *ptr ;
    //assign  the address of the val[0] to the ptr
    //we can use  ptr=&val[0]

    ptr =&val[0];
    cout<< "Elements of the array are: ";
    cout<< ptr[0] <<" \n"  << ptr[1] << "\n " << ptr[2] <<"\n" ;
}

int main(){
    geeks();
    return 0;
}