#include <iostream>
using namespace std;

int main() {
    // Membuat array 2 dimensi dengan ukuran 12x2
    int dataBulanTahun[12][2];

    // Mengisi data bulan dan tahun ke dalam array
    for (int i = 0; i < 12; i++) {
        dataBulanTahun[i][0] = i + 1; // Bulan
        dataBulanTahun[i][1] = 2022; // Tahun
    }

    // Menampilkan data bulan dan tahun dari array
    for (int i = 0; i < 12; i++) {
        cout << "Bulan: " << dataBulanTahun[i][0] << ", Tahun: " << dataBulanTahun[i][1] << endl;
    }

    return 0;
}

