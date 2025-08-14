// MENGHITUNG KELILING & LUAS SEGITIGA SIKU-SIKU

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double alas, tinggi, miring, luas, keliling;
    cout << "Masukkan alas: ";
    cin >> alas;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    // Perhitungan sisi miring, keliling, dan luas
    miring = sqrt(pow(alas, 2) + pow(tinggi, 2));
    keliling = alas + tinggi + miring;
    luas = 0.5 * alas * tinggi;

    // Cetak hasil perhitungan
    cout << "\n=== Hasil Perhitungan ===\n";
    cout << "Sisi miring: " << miring << endl;
    cout << "Luas segitiga: " << luas << endl;
    cout << "Keliling segitiga: " << keliling << endl;
}