//Ian Lin
#include <iostream>
using namespace std;

int main() {
    int n; 

    cout << "Enter n: ";
    cin >> n;

    for (int r = 1; r<= n; r++){
        for(int c =1; c<=n-r; c++){
            cout << " ";
        }
        for(int c=1; c<=r; c++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
