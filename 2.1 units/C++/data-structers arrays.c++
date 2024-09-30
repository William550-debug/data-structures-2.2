
#include <iostream>
using namespace std;


int findElement(int  arr[], int n, int key){
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int result = findElement(arr, n, key);
    (result != -1) ? cout << "Element found at index " << result : cout << "Element not found in array";

    if(result == -1){
        cout<<"Element not found";

    }
    else{
        cout<<"Element found at index "<<result;
    }
    return 0;
}