// MENENTUKAN BIAYA PARKIR BERDASARKAN DURASI PARKIR

#include <iostream>
using namespace std;

int main() {
    int lamaParkir, biaya;
    string message;

    cout << "Masukkan lama parkir (jam): ";
    cin >> lamaParkir;

    // Seleksi biaya parkir berdasarkan lama parkir
    if (lamaParkir > 12) {
        message = "Hubungi petugas!";
        cout << message << endl;
    } else if (lamaParkir <= 2) {
        biaya = 5000;
    } else {
        biaya = 5000 + ((lamaParkir - 2) * 3000);
    } 

    if (biaya > 20000) {
        biaya = 20000;
    }

    cout << "Biaya parkir selama " << lamaParkir << " jam = " << biaya << " Rupiah";
    // cout << biaya << message << endl;
}