// MENENTUKAN KATEGORI UMUR

#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cout << "Masukkan bilangan bulat: ";
    cin >> bilangan;

    // Pengecekan ganjil genap
    if (bilangan % 2 == 0) {
        cout << bilangan << "adalah bilangan GENAP";
    } else {
        cout << bilangan << "adalah bilangan GANJIL";
    }
    
    cin.ignore();
    cin.get();
}