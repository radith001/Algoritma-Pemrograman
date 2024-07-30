#include <iostream>

using namespace std;

int main() {
	int apasaja;
    int karakter;
    int pilihan;
    int health = 100;
    int healthmusuh = 100;
    
cout << " ____      _       _ _____ ____  __        ___    ____  ____  ___ ___  ____" << endl; 
cout << "|  _ \\    / \\     | | ____/ ___| \\ \\      / / \\  |  _ \\|  _ \\|_ _/ _ \\|  _ \\ " << endl;
cout << "| |_) |  / _ \\ _  | |  _|| |  _   \\ \\ /\\ / / _ \\ | |_) | |_) || | | | | |_) |" << endl;
cout << "|  _ <  / ___ \\ |_| | |__| |_| |   \\ V  V / ___ \\|  _ <|  _ < | | |_| |  _ < " << endl;
cout << "|_| \\_\\/_/   \\_\\___/|______\\____|    \\_/\\_/_/   \\_\\_| \\_\\_| \\_\\___\\___/|_| \\_\\" << endl;
cout << "====================================================================================" << endl << endl;
    cout << "Selamat datang di Rajeg Warrior!!" << endl;
    cout << "Kalahkan Raja Hytam untuk memenangkan permainan ini." << endl << endl;
    cout << "Tekan 1 untuk melanjutkan" << endl;
    cin >> apasaja;
    
    cout << "\033[2J\033[1;1H";
    
    cout << "Pilih karakter Anda:" << endl;
    cout << "1. Kesatria" << endl;
    cout << "2. Pemanah" << endl;
    cout << "3. Medis" << endl;
    cout << "Pilihan: ";
    cin >> karakter;
    
    cout << "\033[2J\033[1;1H";

    switch (karakter) {
        case 1:
            cout << "Anda memilih Kesatria." << endl;
            break;
        case 2:
            cout << "Anda memilih Pemanah." << endl;
            break;
        case 3:
            cout << "Anda memilih Medis." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 0;
    }

    do {
        cout << "\nPilihan tindakan:" << endl;
        cout << "1. Serang (-10 HP)" << endl;
        cout << "2. Memulihkan (+10 HP)" << endl;
        cout << "3. Beli Senjata" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        
        cout << "\033[2J\033[1;1H";

        switch (pilihan) {
            case 1:
                health -= 10;
                healthmusuh -= 10;
                cout << "Anda telah menyerang Raja Hytam dan Raja Hytam menyerang balik Anda" << endl;
                cout << "Sisa HP Anda: " << health << endl;
                cout << "Sisa HP Raja Hytam: " << healthmusuh << endl;
                break;
            case 2:
                health += 10;
                cout << "Anda berhasil memulihkan diri. HP Anda sekarang: " << health << endl;
                break;
            case 3:
                int senjata;
                cout << "List senjata yang tersedia:" << endl;
                cout << "1. Panah" << endl;
                cout << "2. Pedang" << endl;
                cout << "3. Catalyst" << endl;
                cout << "Pilihan senjata: ";
                cin >> senjata;
                
                cout << "\033[2J\033[1;1H";

                switch (senjata) {
                    case 1:
                        cout << "Anda membeli panah." << endl;
                        break;
                    case 2:
                        cout << "Anda membeli pedang." << endl;
                        break;
                    case 3:
                        cout << "Anda membeli catalyst." << endl;
                        break;
                    default:
                        cout << "Pilihan senjata tidak valid." << endl;
                }
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (health > 0 && healthmusuh > 0);

    cout << "Raja Hytam telah di kalahkan dan game selesai." << endl;
	cout << "Terima kasih telah Bermain Rajeg Warrior!" << endl;

    return 0;
}


