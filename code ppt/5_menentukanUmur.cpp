// MENENTUKAN KATEGORI UMUR

#include <iostream>
using namespace std;

int main() {
    int umur;
    cout << "Masukkan umur: ";
    cin >> umur;

    // Seleksi kategori umur
    if (umur < 0) {
        cout << "Umur harus >= 0" << endl;
    } else if (umur <= 12) {
        cout << "Anak-anak" << endl;
    } else if (umur >= 13 && umur <= 17) {
        cout << "Remaja" << endl;
    } else {
        cout << "Dewasa" << endl;
    }

}