//Ian Lin
#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter n: ";
    cin >> n;

    for(int r =1;r<=n;r++){
        for(int c =1;c<=n;c++){
            if(r==c)
            cout << "* ";
            else
            cout << "  ";
        }
        cout << endl;
    }


    return 0;
}