#include <iostream>
using namespace std;
void reverseArray(int arr[], int size) {
    int start = 0; // Start index
    int end = size - 1; // End index
    while (start < end) { // Loop until the start index is less than the end index
        // Swap the elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; // Move the start index forward
        end--; // Move the end index backward
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the
    // array by dividing the total size of the array by the size of one element
    cout << "Original array: ";
    for (int i = 0; i < size; i++) { // Loop through
        cout << arr[i] << " "; // Print each element of the original array
    }
    cout << endl; // New line for better readability
    reverseArray(arr, size); // Call the function to reverse the array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) { // Loop through
        cout << arr[i] << " "; // Print each element of the reversed array
    }
    cout << endl; // New line for better readability
    // The program reverses the elements of an array and prints both the original and reversed arrays
    return 0;
}