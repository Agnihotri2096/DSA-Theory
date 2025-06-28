#include <iostream>
using namespace std;
int main() {
    // Declare and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};
    int target; // Variable to hold the target value to search for
    bool found = false; // Flag to indicate if the target is found
    cout << "Enter a number to search: ";
    cin >> target; // Read the target value from user input 
    // Perform linear search
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == target) { // Check if the current element matches the target
            found = true; // Set the flag to true if found
            cout << "Number found at index: " << i << endl; // Output the index
            break; // Exit the loop since we found the target
        }
    }
    if (!found) { // If the target was not found
        cout << "Number not found in the array." << endl; // Output not found message
    }

    return 0;
}