#include <iostream>
using namespace std;

int main() {
    // Meminta input user
    int n, jumlah, i;
    cout << "Masukkan nilai N: ";
    cin >> n;

    // Perhitungan 1 + 2 + ... + n
    i = 1;
    while(i <= n) {
        jumlah += i;
        i++;
    }

    cout << jumlah << endl;
}