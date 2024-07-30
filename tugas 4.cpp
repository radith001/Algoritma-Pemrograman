#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int karakter;
    int opsi;
    int damage = 0;
    int senjata;
    int uang = 500;
    //NYAWA
    int nyawa = 100; //(MONSTER)
    int nyawak =100; //(PEMAIN)
    //BELI PEDANG
    int bs1;
    int bs2;
    //HARGA PEDANG
    int pedangk;
    int pedanglg;
    //UANG
    int sisa_uang;
    int total =0;
    //JENIS SENJATA
    string js;
    
    pilih:

    cout << "===================================" <<endl;
    cout << "# KARAKTER YANG TERSEDIA :        #" << endl;
    cout << "# 1. KESATRIA                     #" << endl;
    cout << "# 2. PEMANAH                      #" << endl;
    cout << "# 3. MEDIS                        #" << endl;
    cout << "===================================" << endl;

    cout << "SILAHKAN PILIH KARAKTER : ";
    cin >> karakter;

    if (karakter == 1)
    {
        cout << "ANDA MEMILIH KESATRIA              " <<endl;
        cout << "===================================";
    }
    else if (karakter == 2)
    {
        cout << "ANDA MEMILIH PEMANAH               " <<endl;
        cout << "===================================";
    }
    else if (karakter == 3)
    {
        cout << "ANDA MEMILIH MEDIS";
    }
    else
    {
        cout << "MAAF KARAKTER TIDAK TERSEDIA";
    }

    cout << endl
         << endl;
    
    //LOOPING DO WHILE     
    do {
    
    //UNTUK RANDOM ANGKA
    int rser;
    srand(time(0));
    rser = rand() % 15 + 1;
    
    int rheal;
    rheal = rand () %10 + 1;
    
    //serangan monster
    int sermon;
    sermon = rand () %15 +1;
    
    //damage total
    int damage_total = rser + damage;
    
    //damage memulihkan
    int damage_heal = rand() %5+1;

            cout << "PILIH OPSI : " << endl;
            cout << "1. SERANG " << endl;
            cout << "2. MEMULIHKAN" << endl;
            cout << "3. BELI SENJATA" << endl;
            cout << "4. GANTI KARAKTER" <<endl;
            cout << "5. KELUAR"<<endl;
            cout << "SILAHKAN PILIH OPSI : ";
            cin >> opsi;
            cout << "===================================" << endl;
            cout <<endl;

        switch (opsi)
        {
        case 1:
            nyawa -= damage_total;
            nyawak -= sermon;
            cout << "ANDA MENYERANG MONSTER DENGAN "<< damage_total << " DAMAGE SISA NYAWA MONSTER " << nyawa <<endl;
            cout << "MOSTER MENYERANG ANDA DENGAN " << sermon << " DAMAGE SISA NYAWA ANDA " <<nyawak <<endl <<endl;
            cout << "===================================" << endl << endl;
            if(nyawa <= 0){
                cout << "SELAMAT ANDA BERHASIL MENGALAHKAN MONSTER" << endl << endl;
                uang += 100;
                goto keluar;
            }
            else if(nyawak <= 0){
                cout << "KAMU DIKAHLAHKAN OLEH MONSTER" << endl << "JANAGAN MENYERAH SILAHKAN COBA LAGI" << endl << endl;
                goto keluar;
            }
            break;

            case 2:
                nyawak += rheal;
                nyawak -= sermon;
                nyawa -= damage_heal;
                cout << "ANDA MENYERANG MONSTER DENGAN "<< damage_heal << " DAMAGE SISA NYAWA MONSTER " << nyawa <<endl;
                cout << "MOSTER MENYERANG ANDA DENGAN " << sermon << " DAMAGE " <<endl;
                cout << "DAN ANDA MEMULIHKAN "<< rheal <<" HP ANDA, NYAWA ANDA TERSISA "<< nyawak <<endl <<endl;
                cout << "===================================" << endl << endl;
            break; 
                
            if(nyawa <= 0){
                cout << "SELAMAT ANDA BERHASIL MENGALAHKAN MONSTER" << endl << endl;
                uang += 100;
                goto keluar;
            }
            else if(nyawak <= 0){
                cout << "KAMU DIKAHLAHKAN OLEH MONSTER" << endl << "JANAGAN MENYERAH SILAHKAN COBA LAGI" << endl << endl;
                goto keluar;
            }
        
            else{
                cout << "PERTEMPURAN SERI";
                goto keluar;
            }

            case 3:
            //UNTUK BELI SENJATA
            if(karakter == 1){
                    cout << "SENJATA YANG TERSEDIA : " << endl;
                    cout << "1. PEDANG KESATRIA (300)" << endl;
                    cout << "2. PEDANG LEGENDARIS (500)" << endl << endl;
                    cout << "uang anda sisa : " << uang << endl<<endl;
            

                cout <<"PILIH : ";
                cin >> bs1;

            switch(bs1){
                
            case 1:
                    js = "PEDANG KESATRIA (DAMAGE +5)";
                    total += 300;
                    damage += 5;
            break;
                    
            case 2:
                    js = "PEDANG LEGENDARIS (DAMAGE +10)";
                    total += 500;
                    damage += 10;
            break;
                    
            default:
                    cout << "PILIHAN SENJATA TIDAK TERSEDIA";
            break;
                 } 
                 }  
                
            else if (karakter == 2){
                    cout << "SENJATA YANG TERSEDIA : " << endl;
                    cout << "1. PANAH API (200)" << endl;
                    cout << "2. PEDANG LEGENDARIS (400)" << endl << endl;
                    cout << "UANG ANDA : " << uang << endl<<endl;
                

                cout <<"PILIH : ";
                cin >> bs2;
            switch(bs2){
                
            case 1:
                    js = "PANAH API (DAMAGE +5)";
                    total += 200;
                    damage += 5;
            break;
                    
            case 2:
                    js = "PANAH LEGENDARIS (DAMAGE +10)";
                    total += 400;
                    damage += 10;
            break;
                    
            default:
                    cout << "PILIHAN SENJATA TIDAK TERSEDIA";
            break;
                 }   
                }
                
                sisa_uang = uang - total;
                
            if(total > uang){
                cout << "UANG ANDA TIDAK CUKUP";}
                
            else{
                cout << "ANDA MEMBELI " << js << endl <<endl;
                cout << "SISA UANG ANDA : " << sisa_uang <<endl <<endl;
                }
                
            break;
            
            case 4:
                goto pilih;
                break;

            case 5:
                goto keluar;
                break;

            default:
                cout << "PILIHAN TIDAK TERSEDIA";
                break;
                
            cout << endl
                 << "===========================================" << endl;

        }
    } while (opsi <= 5);

    keluar:
    cout << endl << "TERIMAKASIH SUDAH BERMAIN";
    

    return 0;

}
