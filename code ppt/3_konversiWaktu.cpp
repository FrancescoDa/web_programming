// KONVERSI DETIK KE MENIT & JAM

#include <iostream>
using namespace std;

int main() {
    int totalDetik, sisaDetik, detik, menit, jam;
    cout << "Masukkan detik: ";
    cin >> totalDetik;

    // Konversi waktu
    jam = totalDetik / 3600;
    sisaDetik = totalDetik % 3600;
    menit = sisaDetik / 60;
    detik = sisaDetik % 60;

    // Cetak hasil konversi
    cout << "\n=== Hasil Konversi ===\n";
    cout << jam << ":" << menit << ":" << detik;

    cin.ignore();
    cin.get();
}