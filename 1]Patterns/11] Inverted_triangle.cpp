#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // Inverted Triangle pattern
    for (int i = n; i >0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << n-i;
        }
        cout << endl;
    }

    return 0;
}