#include <iostream>
using namespace std;

void insertElement(int arr[], int n , int x , int position){
    for(int i = n; i > position; i--){
        arr[i] = arr[i-1];
    }

    arr[position] = x;
}

int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6, position = 8;

    insertElement(arr, n, x, position);

    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}