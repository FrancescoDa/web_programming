//DERET FIBONACCI SUKU PERTAMA SAMPAI SUKU KE-N

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai N: ";
    cin >> n;
    int a = 0;
    int b = 1;

    // Mencetak 2 suku pertama
    cout << a << ", " << b << ", ";

    // Mencetak deret Fibonacci sampai suku ke-N
    for (int i=1; i<=n-2; i++) {
        int c = a + b;
        a = b;
        b = c;
        cout << c;

        // Pengecekan untuk mencetak "," kecuali pada suku terakhir
        if (i == n-2) {
            cout << endl;
        } else {
            cout << ", ";
        }
    }

}