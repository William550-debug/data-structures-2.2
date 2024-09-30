#include <iostream>
using namespace std;


//inserts a key in arr[] of the given capacity
//n is the cuurent size ofthe array
// function returns n + 1 if insertion successful
// is successful else n

int insertEnd(int arr[], int n, int key, int capacity){

    // if array is full cannnot insert any more elements

    if (n >= capacity)
        return n;

    // insert the key at the end of the array
    arr[n] = key;
    return (n + 1);
}

int main()
{
    int arr[20] = { 12, 16, 20, 40, 50, 70 };
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, key = 26;

    cout << "Before Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Inserting key
    n = insertEnd(arr, n, key, capacity);

    cout << "\nAfter Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}