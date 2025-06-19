#include <iostream>
using namespace std;
int main(){
    long int binNum;
    cout << "Enter a binary number: ";
    cin >> binNum;
    int decNum=0;
    int power = 1;
    while (binNum > 0) {
        int remainder = binNum % 10;
        decNum += remainder * power;
        binNum /= 10;
        power *= 2;
    }
    cout << "Binary representation: " << decNum << endl;
}