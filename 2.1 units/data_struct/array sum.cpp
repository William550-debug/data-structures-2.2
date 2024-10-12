#include <iostream>
using namespace std;

// Function to calculate the sum of an array
int sumArray(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++ ){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* array = new int[size]; // Dynamically allocate memory for the array

    cout << "Enter the elements in array: ";
    for (int i = 0; i < size; i++ ){
        cin >> array[i];
    }

    int sum = sumArray(array, size);
    cout << "Sum of the array: " << sum << endl;

    delete[] array; // Deallocate memory to prevent memory leak

    return 0;
}