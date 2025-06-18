#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int num = 1;
    // Floyd's Triangle pattern
    for (int i = 0; i > n; i++) {
        for (int j = i; j < 0; j--) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}