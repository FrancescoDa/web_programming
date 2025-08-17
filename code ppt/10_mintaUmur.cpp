// PENGECEKAN UMUR DIANTARA 17 SAMPAI 60

#include <iostream>
using namespace std;

int main() {

    while(true) {
        int umur;
        cout << "Masukkan umur anda: ";
        cin >> umur;
    
        // Pengecekan umur antara 17-60
        if(umur >= 17 && umur <= 60) {
            cout << "Umur anda diterima" << endl;
            break;
        }
    }

}