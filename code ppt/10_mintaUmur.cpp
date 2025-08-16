#include <iostream>
using namespace std;

int main() {

    while(true) {
        int umur;
        cout << "Masukkan umur anda: ";
        cin >> umur;
    
        if(umur >= 17 && umur <= 60) {
            cout << "Umur anda diterima" << endl;
            break;
        }

    }
}