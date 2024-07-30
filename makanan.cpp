#include <iostream>
#include <string>

using namespace std;

int main()
{
    // List Menu Makanan 
    int PL = 15000 , NG = 15000;
    
    // List Menu Minuman 
    int J = 7000, TM = 4000;
    
    // Harga total
    int total = 0;

    // Harga makanan
    string kode_makanan;
    string makanan;
    
    // Harga minuman
    string kode_minuman;
    string minuman;
    
    // Uang bulanan
    int uangBulanan = 50000;

    cout << "Masukkan Kode Makanan: ";
    cin >> kode_makanan;

    cout << endl;

    cout << "Masukkan Kode Minuman: ";
    cin >> kode_minuman;

    if (kode_makanan == "PL") {
        makanan = "Pecel Lele";
        total += PL;
    } else if (kode_makanan == "NG") {
        makanan = "Nasi Goreng";
        total += NG;
    } else {
        cout << endl << "Maaf Kode Makanan Tidak Tersedia" << endl;
    }

    if (kode_minuman == "TM") {
        minuman = "Teh Manis";
        total += TM;
    } else if (kode_minuman == "J") {
        minuman = "Jus";
        total += J;
    } else {
        cout << endl << "Maaf Kode Minuman Tidak Tersedia" << endl;
    }

    if (total > uangBulanan) {
        cout << endl << "Mohon Maaf Uang Anda Tidak Cukup :(" << endl;
    } else {
        cout << endl << "Anda pesan makanan " << makanan << " & minuman " << minuman <<
            " dengan total pesanan sebesar Rp " << total << endl;
    }

    return 0;
}

