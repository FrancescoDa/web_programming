// KONVERSI UANG

#include <iostream>
using namespace std;

int main() {
    int jumlahUang, jumlahLembar, sisaUang;
    cout << "Masukkan jumlah uang: ";
    cin >> jumlahUang;

    // Konversi uang
    jumlahLembar = jumlahUang / 5000;
    sisaUang = jumlahUang % 5000;

    // Cetak hasil konversi
    cout << "\n=== Hasil Konversi ===\n";
    cout << jumlahLembar << " lembar" << endl;
    cout << "Sisa " << sisaUang << " Rupiah" << endl;

}