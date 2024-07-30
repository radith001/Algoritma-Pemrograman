#include <iostream>

using namespace std;

void tambah(int angka1, int angka2) {
    cout << "Hasil penjumlahan: " << angka1 + angka2 << endl;
}

void kurang(int angka1, int angka2) {
    cout << "Hasil pengurangan: " << angka1 - angka2 << endl;
}

void kali(int angka1, int angka2) {
    cout << "Hasil perkalian: " << angka1 * angka2 << endl;
}

void bagi(int angka1, int angka2) {
    if (angka2 != 0)
        cout << "Hasil pembagian: " << angka1 / angka2 << endl;
    else
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
}

int main() {
    int angka1, angka2;
    char pilih;
    
    do {
        cout << "Pilih operasi (+, -, *, /) atau q untuk keluar: ";
        cin >> pilih;

        if (pilih != 'q') {
            cout << "Masukkan dua angka: ";
            cin >> angka1 >> angka2;

            switch (pilih) {
                case '+':
                    tambah(angka1, angka2);
                    break;
                case '-':
                    kurang(angka1, angka2);
                    break;
                case '*':
                    kali(angka1, angka2);
                    break;
                case '/':
                    bagi(angka1, angka2);
                    break;
                default:
                    cout << "Operasi tidak valid." << endl;
            }
        }
    } while (pilih != 'q');

    return 0;
}

