#include <iostream>

int main() {

    int angka1, angka2;

 
    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    int hasilPenjumlahan = angka1 + angka2;
    int hasilPengurangan = angka1 - angka2;
    int hasilPerkalian = angka1 * angka2;
    int hasilPembagian = angka1 / angka2;

    std::cout << "Hasil penjumlahan: " << hasilPenjumlahan << std::endl;
    std::cout << "Hasil pengurangan: " << hasilPengurangan << std::endl;
    std::cout << "Hasil perkalian: " << hasilPerkalian << std::endl;
    std::cout << "Hasil pembagian: " << hasilPembagian << std::endl;


    return 0;		
}
