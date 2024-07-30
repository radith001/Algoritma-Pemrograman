#include <iostream>
using namespace std;

int main() {
    float angka1, angka2;
    char operasi;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (operasi) {
        case '+':
            cout << "Hasil penjumlahan: " << angka1 + angka2 << endl;
            break;
        case '-':
            cout << "Hasil pengurangan: " << angka1 - angka2 << endl;
            break;
        case '*':
            cout << "Hasil perkalian: " << angka1 * angka2 << endl;
            break;
        case '/':
            if (angka2 != 0) {
                cout << "Hasil pembagian: " << angka1 / angka2 << endl;
            } else {
                cout << "Error: Pembagian dengan angka 0 tidak valid." << endl;
            }
            break;
        default:
            cout << "Error: Operator yang dimasukkan tidak valid." << endl;
            break;
    }

    return 0;
}

