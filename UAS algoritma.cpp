#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menampilkan daftar mata kuliah yang direkomendasikan berdasarkan sisa SKS
void tampilkanMataKuliahRekomendasi(int sisaSks) {
    // Ini adalah contoh sementara. Pada aplikasi nyata, Anda akan memiliki database atau file dengan data mata kuliah yang sebenarnya.
    vector<string> mataKuliahRekomendasi = {"MataKuliahA", "MataKuliahB", "MataKuliahC"};

    cout << "Mata Kuliah Rekomendasi:" << endl;
    for (const string& mataKuliah : mataKuliahRekomendasi) {
        cout << "- " << mataKuliah << endl;
    }
}

int main() {
    string nama, nim;
    double ipk;
    int semester;

    // Input data
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);

    cout << "Masukkan NIM Anda: ";
    getline(cin, nim);

    cout << "Masukkan IPK terakhir Anda: ";
    cin >> ipk;

    cout << "Masukkan semester Anda: ";
    cin >> semester;

    // Tentukan maksimum SKS berdasarkan IPK
    int maksSks;
    if (ipk < 3.0) {
        maksSks = 18;
    } else if (ipk >= 3.0 && ipk <= 3.5) {
        maksSks = 22;
    } else {
        maksSks = 24;
    }

    // Tampilkan data pengguna
    cout << "\nData Pengguna:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "IPK Terakhir: " << ipk << endl;
    cout << "Semester: " << semester << endl;
    cout << "Maksimum SKS: " << maksSks << endl;

    // Tampilkan daftar mata kuliah wajib
    cout << "\nDaftar Mata Kuliah Wajib:" << endl;
    // Tambahkan kode untuk menampilkan daftar mata kuliah wajib berdasarkan semester

    // Tampilkan daftar mata kuliah rekomendasi
    int sisaSks = maksSks;  // Diasumsikan belum mengambil mata kuliah
    cout << "\nDaftar Mata Kuliah Rekomendasi:" << endl;
    tampilkanMataKuliahRekomendasi(sisaSks);

    return 0;
}

