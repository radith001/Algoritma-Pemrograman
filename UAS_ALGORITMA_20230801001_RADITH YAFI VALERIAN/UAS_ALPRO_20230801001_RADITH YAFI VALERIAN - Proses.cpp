#include "UAS_ALPRO_20230801001_RADITH YAFI VALERIAN - Pustaka.h"

#ifdef _WIN32
    #include <conio.h>
#else
    #include <termios.h>
    #include <unistd.h>

    char getch() {
        char buf = 0;
        struct termios old = {0};
        fflush(stdout);
        if (tcgetattr(0, &old) < 0) perror("tcsetattr()");
        old.c_lflag &= ~ICANON;
        old.c_lflag &= ~ECHO;
        old.c_cc[VMIN] = 1;
        old.c_cc[VTIME] = 0;
        if (tcsetattr(0, TCSANOW, &old) < 0) perror("tcsetattr ICANON");
        if (read(0, &buf, 1) < 0) perror ("read()");
        old.c_lflag |= ICANON;
        old.c_lflag |= ECHO;
        if (tcsetattr(0, TCSADRAIN, &old) < 0) perror ("tcsetattr ~ICANON");
        return buf;
    }
#endif

void gerakGaris(const char* kata, int jumlah) {
    int garis = jumlah;
    while (garis--) {
        std::cout << kata;
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
}

void systemClose() {
    #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif
}

void systemPause() {
    #ifdef _WIN32
        system("pause");
    #else
        std::cout << "Press Enter to continue...";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
    #endif
}

void noticeDefault() {
    std::cout << "Masukkan Dengan Benar\n";
    std::cout << "Silahkan Coba Lagi." << std::endl;
    std::cout << "Press any key to continue...";
    getch();
    systemClose();
}

void noticeExit() {
    systemClose();
    std::cout << "Terima Kasih Telah Menggunakan >_<" << std::endl;
    exit(0);
}

void menghitungUmur() {
	int tahunSaatIni = 2024;
	int tahunLahir, umur;
	systemClose();
	std::cout << "Masukkan Tahun Lahir : ";
	std::cin >> tahunLahir;
	umur = tahunSaatIni - tahunLahir;
	std::cout << "Umur Anda Adalah : " << umur << " Tahun\n\n";
}

void konversiNilaiKeHuruf() {
	int dataNilai;
	systemClose();
	std::cout << "Masukkan Nilai : ";
	std::cin >> dataNilai;
	if (dataNilai > 100){
		std::cout << "\nInput nilai tidak boleh lebih dari 100\n\n";
		systemPause();
		konversiNilaiKeHuruf();
	} else if (dataNilai >= 80 && dataNilai <= 100) {
		std::cout << "\nNilai anda adalah A";
		std::cout << "\nAnda dinyatakan LULUS\n\n";
	} else if (dataNilai >= 60 && dataNilai <= 79) {
		std::cout << "\nNilai anda adalah B";
		std::cout << "\nAnda dinyatakan LULUS\n\n";
	} else if (dataNilai >= 40 && dataNilai <= 59) {
		std::cout << "\nNilai anda adalah C";
		std::cout << "\nAnda dinyatakan LULUS\n\n";
	} else if (dataNilai >= 20 && dataNilai <= 39) {
		std::cout << "\nNilai anda adalah D";
		std::cout << "\nAnda dinyatakan TIDAK LULUS\n\n";
	} else if (dataNilai >= 0 && dataNilai <= 19) {
		std::cout << "\nNilai anda adalah E";
		std::cout << "\nAnda dinyatakan TIDAK LULUS\n\n";
	}
}

void menghitungUangPecahan() {
    int pecahan[] = {100000, 75000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 1};
    int jumlahPecahan[16] = {0};
    int uang;
    systemClose();
    std::cout << "Masukkan jumlah uang: ";
    std::cin >> uang;
    std::cout << "Jumlah uang: " << uang << std::endl;
    for (int i = 0; i < 16; ++i) {
        while (uang >= pecahan[i]) {
            uang -= pecahan[i];
            jumlahPecahan[i]++;
        }
        if (jumlahPecahan[i] > 0) {
            std::cout << jumlahPecahan[i] << " ";

            if (pecahan[i] >= 1 && pecahan[i] <= 500) {
                std::cout << "koin ";
            } else {
                std::cout << "lembar ";
            }

            std::cout << pecahan[i] << "\n";
        }
    }
    std::cout << std::endl;
}

void sistemMenu() {
    char _Menu[100];
    systemClose();
    gerakGaris("=", 100);
    std::cout << "\n\t\t\t\tPROGRAM RAJEG\n";
    gerakGaris("=", 100);
    std::cout << "\n1. Menghitung Umur\n";
    std::cout << "2. Konversi Nilai Ke Huruf\n";
    std::cout << "3. Menghitung Uang Pecahan\n";
    std::cout << "4. Keluar Aplikasi\n";
    std::cout << "\nMasukkan Pilihan Menu Sesuai Nomor Menu Atau Tulis Nama Menunya : ";
    std::cin >> std::setw(sizeof(_Menu)) >> _Menu;
    _Menu[strcspn(_Menu, "\n")] = 0;

    if (strcmp(_Menu, "1") == 0 || strcasecmp(_Menu, "meenghitung umur") == 0) {
        menghitungUmur();
        sistemSubMenu();
    } else if (strcmp(_Menu, "2") == 0 || strcasecmp(_Menu, "konversi nilai ke huruf") == 0) {
    	konversiNilaiKeHuruf();
        sistemSubMenu();
    } else if (strcmp(_Menu, "3") == 0 || strcasecmp(_Menu, "menghitung uang pecahan") == 0) {
    	menghitungUangPecahan();
        sistemSubMenu();
    } else if (strcmp(_Menu, "4") == 0 || strcasecmp(_Menu, "keluar aplikasi") == 0) {
        noticeExit();
    } else {
        noticeDefault();
        sistemMenu();
    }
}

void sistemSubMenu() {
    char subMenu[100];
    gerakGaris("=", 100);
    std::cout << "\n\t\t\t\t\t   Pilihan Menu\n";
    gerakGaris("=", 100);
    std::cout << "\n1. Kembali Ke Awal\n";
    std::cout << "2. Keluar Aplikasi\033[0m\n";
    std::cout << "\nMasukkan Pilihan Menu Sesuai Nomor Menu Atau Tulis Nama Menunya : ";
    std::cin >> std::setw(sizeof(subMenu)) >> subMenu;
    subMenu[strcspn(subMenu, "\n")] = 0;

    if (strcmp(subMenu, "1") == 0 || strcasecmp(subMenu, "kembali ke awal") == 0) {
        sistemMenu();
    } else if (strcmp(subMenu, "2") == 0 || strcasecmp(subMenu, "keluar aplikasi") == 0) {
        noticeExit();
    } else {
        noticeDefault();
        sistemSubMenu();
    }
}
