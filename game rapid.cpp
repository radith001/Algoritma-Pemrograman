#include <iostream>
using namespace std;

int main() {
	
    string Home, NamaKarakter, JenisSenjata, Game, Mulai, PilihanMonster;

    int DamageSenjata, DamagePlayer, DarahPlayer, HpMonster, DamageMonster, pilihan_karakter;

    while (true) {
        cout << endl;
        cout << "==================================" << endl;
        cout << "|| 1. MULAI GAME                ||" << endl;
        cout << "|| 2. KELUAR                    ||" << endl;
        cout << "==================================" << endl;
        cout << "MASUKKAN PILIHAN : ";
        cin >> Home;
        cout << endl << endl;

        if (Home == "1") {
            while (true) {
                cout << "Pilih karakter Anda: " << endl;
                cout << "1. KSATRIA " << endl;
                cout << "2. PEMANAH " << endl;
                cout << "3. MEDIS " << endl;
                cout << "4. KELUAR " << endl;
                cout << "PILIHAN : ";
                cin >> pilihan_karakter;

                if (pilihan_karakter == 1) {
                    NamaKarakter = "KSATRIA";
                    JenisSenjata = "PEDANG";
                    DamageSenjata = 35; 
                    DamagePlayer = 30; 
                    DarahPlayer = 1000;
                } else if (pilihan_karakter == 2) {
                    NamaKarakter = "PEMANAH";
                    JenisSenjata = "BUSUR";
                    DamageSenjata = 30; 
                    DamagePlayer = 25; 
                    DarahPlayer = 1000;
                } else if (pilihan_karakter == 3) {
                    NamaKarakter = "MEDIS";
                    JenisSenjata = "KIT MEDIS";
                    DamageSenjata = 0; 
                    DamagePlayer = 20; 
                    DarahPlayer = 1100;
                } else if (pilihan_karakter == 4) {
                    break; 
                } else {
                    cout << "PILIHAN KARAKTER TIDAK ADA" << endl;
                    continue;
                }

                cout << endl;
                cout << "ANDA MEMILIH KARAKTER " << NamaKarakter << endl;
                cout << "ANDA MEMILIH SENJATA " << JenisSenjata << endl;
                cout << "HP KARAKTER: " << DarahPlayer << endl;
                cout << "DAMAGE SENJATA: " << DamageSenjata << endl;
                cout << "ATTACK KARAKTER: " << DamagePlayer << endl << endl;

                while (true) {
                    cout << "==================================" << endl;
                    cout << "|| 1. SERANG MONSTER            ||" << endl;
                    cout << "|| 2. KELUAR                    ||" << endl;
                    cout << "==================================" << endl;
                    cout << "MASUKKAN PILIHAN : ";
                    cin >> Game;

                    if (Game == "1") {
                        cout << "SILAHKAN PILIH MONSTER " << endl;
                        cout << "1. ZOMBIE " << endl;
                        cout << "2. RAKSASA " << endl;
                        cout << "3. KEMBALI " << endl;
                        cout << "SILAHKAN MASUKAN PILIH MONSTER : ";
                        cin >> PilihanMonster;

                        if (PilihanMonster == "1") {
                            HpMonster = 1500;
                            DamageMonster = 130;
                        } else if (PilihanMonster == "2") {
                            HpMonster = 2000;
                            DamageMonster = 150;
                        } else if (PilihanMonster == "3") {
                            break;
                        } else {
                            cout << "PILIHAN MONSTER TIDAK TERSEDIA " << endl;
                            continue; 
                        }

                        while (HpMonster > 0 && DarahPlayer > 0) {
                            cout << endl;
                            cout << "DARAH PLAYER = " << DarahPlayer << endl;

                            cout << endl;
                            cout << "DARAH MONSTER = " << HpMonster << endl;
                            
                            cout << endl;
                            cout << "1. SERANG " << endl;
                            cout << "2. MUNDUR " << endl;

                            cout << endl;
                            cout << "MASUKKAN PILIHAN : ";
                            cin >> Mulai;
                            
                            if (Mulai == "1") {
                                int TOTAL = DamagePlayer + DamageSenjata;
                                HpMonster -= TOTAL;
                                
                                cout << endl;
                                cout << "ANDA MENYERANG MONSTER " << endl;
                                cout << "DAMAGE YANG DITERIMA MONSTER SEBESAR " << TOTAL << " ! " << endl;
                                cout << endl;
                                

                                if (PilihanMonster == "1" || PilihanMonster == "2") {
                                    DarahPlayer -= DamageMonster;
                                    cout << "ANDA TERKENA SERANGAN MONSTER " << endl;
                                    cout << "DAMAGE YANG DITERIMA ANDA SEBESAR " << DamageMonster << " ! " << endl;
                                }
                            } else if (Mulai == "2") {
                                DarahPlayer += 20;
                                cout << "KAMU MUNDUR UNTUK MENGISI HP " << endl;
                            } else {
                                cout << "PILIHAN TIDAK VALID" << endl;
                            }
                        }
                    
                        if (DarahPlayer <= 0) {
                        	cout << endl;
                            cout << "ANDA TELAH DIKALAHKAN OLEH MONSTER" << endl;
                            cout << endl;
                            break;
                        } else if (HpMonster <= 0) {
                        	cout << endl;
                            cout << "ANDA BERHASIL MENGALAHKAN MONSTER !" << endl;
                            cout << endl;
                        }
                    } else if (Game == "2") {
                        break; 
                    } else {
                        cout << "PILIHAN TIDAK VALID" << endl;
                    }
                }

                if (Home == "3") {
                    break; 
                }
            }
        } else if (Home == "2") {
            cout << "TERIMAKASIH SUDAH BERMAIN DAN MEMBANTU MENGALAHKAN MONSTER!" << endl;
            return 0;
        }
    }
}

