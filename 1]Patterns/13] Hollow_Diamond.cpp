#include <iostream>
using namespace std;

int main() {
    int rows, i, j, k;
    cout << "Enter the number of rows for the upper half: ";
    cin >> rows;

    // Upper half of the diamond
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for(k = 1; k <= 2*i - 1; k++) {
            if(k == 1 || k == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for(i = rows - 1; i >= 1; i--) {
        for(j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for(k = 1; k <= 2*i - 1; k++) {
            if(k == 1 || k == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
