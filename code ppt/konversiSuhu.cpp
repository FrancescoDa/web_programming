// KONVERSI SUHU CELSIUS KE FAHRENHEIT & KELVIN

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit, kelvin;
    cout << "Masukkan suhu (°C): ";
    cin >> celsius;

    // Konversi suhu
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;

    // Cetak hasil konversi
    cout << "\n=== Hasil Konversi ===\n";
    cout << celsius << "°C = ";
    cout << fahrenheit << "°F = ";
    cout << kelvin << "°K";

}