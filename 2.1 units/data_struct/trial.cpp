#include <iostream>
using namespace std;

// Function to find the maximum of two numbers using pointers
int findMax(int* a, int* b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int* pNum1 = &num1;  // Pointer to num1
    int* pNum2 = &num2;  // Pointer to num2

    int max = findMax(pNum1, pNum2);

    cout << "The maximum of the two numbers is: " << max << endl;

    return 0;
}