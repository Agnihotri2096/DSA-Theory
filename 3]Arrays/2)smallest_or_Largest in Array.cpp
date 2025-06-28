#include <iostream>
using namespace std;
int main() {
    
    // Declare and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};
    int smallest = numbers[0]; // Assume the first element is the smallest
    int largest = numbers[0];  // Assume the first element is the largest 
    // Loop through the array to find the smallest and largest elements
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i]; // Update smallest if a smaller element is found
        }
        if (numbers[i] > largest) {
            largest = numbers[i]; // Update largest if a larger element is found
        }
    }
    // Output the results
    cout << "Smallest element in the array: " << smallest << endl;
    cout << "Largest element in the array: " << largest << endl;

    return 0;
}