#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    int Iguana = 300000, VaranusSalvator = 100000, ReticulatusPython = 80000, BallPython = 500000, BeardedDragon = 150000;
    int total = 0;
    int total_order_reptil = 0;
    string order = "";
    int uang_pelanggan = 0;
    char pesan_lagi;

    do {
        system("cls");
        cout << "===> RAJEG REPTILE STORE <===\n\n";
        
        cout << "Ready Stock :\n";
        cout << "1. Iguana\n2. Varanus Salvator\n3. Reticulatus Python\n4. Ball Python\n5. Bearded Dragon\n\n";
        cout << "Pilih reptil yang ingin anda beli : ";
        int menu;
        cin >> menu;

        if (menu == 1) {
            cout << "Iguana = 300.000Rp\n";
            cout << "\nMasukkan Jumlah Pesanan : ";
            int jumlahIguana;
            cin >> jumlahIguana;
            total += Iguana * jumlahIguana;
            order += "Iguana";
            total_order_reptil += jumlahIguana;
        } else if (menu == 2) {
            cout << "Varanus Salvator = 100.000Rp\n";
            cout << "\nMasukkan Jumlah Pesanan : ";
            int jumlahVaranusSalvator;
            cin >> jumlahVaranusSalvator;
            total += VaranusSalvator * jumlahVaranusSalvator;
            order += "Varanus Salvator";
            total_order_reptil += jumlahVaranusSalvator;
        } else if (menu == 3) {
            cout << "Reticulatus Python = 80.000Rp\n";
            cout << "\nMasukkan Jumlah Pesanan : ";
            int jumlahReticulatusPython;
            cin >> jumlahReticulatusPython;
            total += ReticulatusPython * jumlahReticulatusPython;
            order += "Reticulatus Python";
            total_order_reptil += jumlahReticulatusPython;
        } else if (menu == 4) {
            cout << "Ball Python = 500.000Rp\n";
            cout << "\nMasukkan Jumlah Pesanan : ";
            int jumlahBallPython;
            cin >> jumlahBallPython;
            total += BallPython * jumlahBallPython;
            order += "Ball Python";
            total_order_reptil += jumlahBallPython;
        } else if (menu == 5) {
            cout << "Bearded Dragon = 150.000Rp\n";
            cout << "\nMasukkan Jumlah Pesanan : ";
            int jumlahBeardedDragon;
            cin >> jumlahBeardedDragon;
            total += BeardedDragon * jumlahBeardedDragon;
            order += "Bearded Dragon";
            total_order_reptil += jumlahBeardedDragon;
        } else {
            cout << "Menu tidak valid :(" << endl;
            return 0;
        }

        cout << "Apakah Anda ingin memesan lagi? (y/n): ";
        cin >> pesan_lagi;
    } while (pesan_lagi == 'y' || pesan_lagi == 'Y');

    system("cls");
    cout << "Total Pesanan  : Rp " << fixed << setprecision(2) << total << ",-" << endl;
    cout << "Masukkan uang Bayar  : ";
    int bayar;
    cin >> bayar;
    uang_pelanggan += bayar;
    int kembalian = uang_pelanggan - total;

    while (uang_pelanggan < total) {
        system("cls");
        cout << "Maaf, uang bayar kurang." << endl;
        cout << "Total Pesanan  : Rp " << fixed << setprecision(2) << total << ",-" << endl;
        cout << "Uang Anda      : Rp " << fixed << setprecision(2) << uang_pelanggan << ",-" << endl;
        cout << "Kekurangan     : Rp " << fixed << setprecision(2) << total - uang_pelanggan << ",-" << endl;

        cout << "\nPilihan:" << endl;
        cout << "1. Tambah uang" << endl;
        cout << "2. Keluar" << endl;

        int pilihan;
        cout << "Masukkan pilihan (1/2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan jumlah uang tambahan: ";
            int tambah_uang;
            cin >> tambah_uang;
            uang_pelanggan += tambah_uang;	
            kembalian = uang_pelanggan - total;
            cout << "Uang Anda sekarang: Rp " << fixed << setprecision(2) << uang_pelanggan << ",-" << endl;
        } else if (pilihan == 2) {
            cout << "Terima kasih!" << endl;
            exit(0);
        } else {
            cout << "Pilihan tidak valid. Program keluar." << endl;
            exit(0);
        }
    }

    system("cls");
    cout << total_order_reptil << " " << order << endl;
    cout << "Total Pesanan  : Rp " << fixed << setprecision(2) << total << ",-" << endl;
    cout << "Uang Pelanggan : Rp " << fixed << setprecision(2) << uang_pelanggan << ",-" << endl;
    cout << "Kembalian      : Rp " << fixed << setprecision(2) << kembalian << ",-" << endl;
    cout << "Terima Kasih !!!" << endl;

    return 0;
}

