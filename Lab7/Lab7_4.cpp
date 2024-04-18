//Ian Lin
#include <iostream>
using namespace std;

int main() {
    int n; 

    cout << "Enter n: ";
    cin >> n;

    for (int r = n; r > 0; r--) {
        for (int c = 0; c < r; c++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
