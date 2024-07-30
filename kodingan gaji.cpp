#include <iostream>

using namespace std;

int main()
{
    int gapokbabu = 75000;
    int gapokking = 95000;
    int bonusbabu = 9;
    int harikerja = 21;
    int asuransi = 5;
    int jamkerbabu = 8;
    int tahunan = 12;
    
    int gajiperbulan = 0; 
    int gajipertahun = 0;

    string namapegawai, tipepegawai,biasa,pejabat;
    int jamkerjainput,bonusBulanan,asuransiBulanan,gapok;

    cout << "Masukan nama pegawai:";
    cin >> namapegawai;
    cout << endl;
    
    cout << "Masukan tipe pegawai (biasa/pejabat):";
    cin >> tipepegawai;
    cout << endl;

    if (tipepegawai == "biasa"){
        cout << "anda memilih biasa" << endl;
    }
    else if (tipepegawai == "pejabat" ){
         cout << "anda memilih pejabat" << endl;
    }
    else cout <<"!!PILIHAN TIDAK SESUAI KRITERIA!! "<< endl << " SILAHKAN COBA LAGI " << endl;
        return 1;

    cout << "Masukan jam kerja:";
    cin >> jamkerjainput;
    cout << endl;

    if (jamkerjainput > jamkerbabu){
        cout << "MAAF JAM MELEBIHI KETENTUAN" << endl << "SILAHKAN COBA LAGI" << endl;
        return 1;
    }

    if (tipepegawai == "biasa"){
        gapok           = (gapokbabu * jamkerjainput) * harikerja + bonusBulanan - asuransiBulanan;
       bonusBulanan    = gapok * 9 / 100;
       asuransiBulanan = gapok * 5 / 100;
       gajipertahun     = gapok * tahunan ;
    } 
    else (tipepegawai == "pejabat");{
       gapok = gapokking * jamkerjainput * harikerja * 60 / 90 - asuransiBulanan;
       asuransiBulanan = gapok * 9 / 100;
       gajipertahun = gapok * tahunan ;
    }
   
    cout << "Nama pegawai:" << namapegawai << endl;
    cout << "Gaji perbulan:" << gapok << endl;
    cout << "Gaji pertahun:" << gajipertahun << endl;
    
    

    return 0;
}
