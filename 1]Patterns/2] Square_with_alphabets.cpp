#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        char ch = 'A'; // Start with 'A'
        for(int j=1;j<=n;j++){
            cout << ch << " "; // Print the character
            ch++; // Move to the next character
        }
        cout << endl;
    }
}