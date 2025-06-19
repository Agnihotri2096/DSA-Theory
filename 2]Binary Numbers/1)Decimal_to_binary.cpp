#include <iostream>
using namespace std;
int main(){
    int decNum;
    cout << "Enter a decimal number: ";
    cin >> decNum;
    if (decNum < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    int binaryNum=0;
    int power = 1;
    while (decNum > 0) {
        int remainder = decNum % 2;
        binaryNum += remainder * power;
        decNum /= 2;
        power *= 10;
    }
    cout << "Binary representation: " << binaryNum << endl;
}