#include <iostream>
using namespace std;
void changeArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i]*2; // Double each element in the array
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
    cout << "Original array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // Print original array elements
    }
    cout << endl;
    changeArray(arr, 5); // Call the function to change the array elements
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // Print modified array elements
    }
    return 0;
}
// changeArray function takes an array and its size as parameters
// It modifies the original array by doubling each element
// The main function initializes an array, prints it, calls changeArray, and prints the modified array
// This demonstrates passing an array by reference in C++