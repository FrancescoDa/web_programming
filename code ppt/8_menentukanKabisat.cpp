// MENENTUKAN KATEGORI UMUR

#include <iostream>
using namespace std;

int main() {
    int tahun;
    string message;
    cout << "Masukkan tahun: ";
    cin >> tahun;

    // Seleksi kategori umur
    if (tahun % 400 == 0) {
        message = "Adalah tahun kabisat";
    } else if (tahun % 100 == 0) {
        message = "Bukan tahun kabisat";
    } else if (tahun % 4 == 0) {
        message = "Adalah tahun kabisat";
    } else {
        message = "Bukan tahun kabisat";
    }

    cout << "Tahun " << tahun << " " << message;

    cin.ignore();
    cin.get();
}