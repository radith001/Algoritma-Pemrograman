
#include <iostream>
#include <cmath>

void luas_persegi() {
    int sisi;
    std::cout << "Masukkan sisi: ";
    std::cin >> sisi;

    int luas = sisi * sisi;

    std::cout << "Luasnya adalah: " << luas << std::endl;
}

void luas_lingkaran() {
    double r;
    std::cout << "Masukkan Jari-Jari: ";
    std::cin >> r;

    double luas_l = M_PI * pow(r, 2);

    std::cout << "Luasnya adalah: " << luas_l << std::endl;
}

void luas_persegi_panjang() {
    int panjang, lebar;
    std::cout << "Masukkan Panjang: ";
    std::cin >> panjang;
    std::cout << "Masukkan Lebar: ";
    std::cin >> lebar;

    int luasp = panjang * lebar;

    std::cout << "Luasnya adalah: " << luasp << std::endl;
}

int main() {
    std::cout << "Rajeg Math\n";
    std::cout << "1. Luas Persegi\n2. Luas Lingkaran\n3. Luas persegi panjang\n\n";
    std::cout << "Masukkan pilihan: ";

    int pilihan;
    std::cin >> pilihan;

    if (pilihan == 1) {
        luas_persegi();
    } else if (pilihan == 2) {
        luas_lingkaran();
    } else if (pilihan == 3) {
        luas_persegi_panjang();
    } else {
        std::cout << "Maaf pilihan yang tersedia hanya 3" << std::endl;
        return 0;
    }

    return 0;
}
