#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <limits>
#include <string>

using namespace std;

string Name = "";
vector<string> weapon;
int Lvl = 1;
int exp = 0;
int atk = 10;
int hp = 100;
int sp = 100;

void Backpack() {
    system("clear");
    sleep(1);
    cout << "Item On your Inventory :\n" << endl;
    sleep(1);
    cout << "Weapon : \n" << endl;
    for (const auto& item : weapon) {
        sleep(1);
        cout << item << endl;
    }
    cout << "\nPress Enter To Go To Menu !" << endl;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}

void Market() {
    system("clear");
    cout << "\033[1;31mHello Welcome To The Market....\033[0m" << endl;
    sleep(1);
    cout << "Need Something ??\n" << endl;
    sleep(1);
    cout << "\033[1;36m(Note Buy Weapon Means You Lose Your Current Weapon)\033[0m" << endl;
    cout << "\033[1;37m1. Common Bow   (+10 Attack)\033[0m" << endl;
    cout << "\033[1;33m2. Rare Bow     (+50 Attack)\033[0m" << endl;
    cout << "\033[1;37m3. Common Sword (+10 Attack)\033[0m" << endl;
    cout << "\033[1;33m4. Rare Sword   (+50 Attack)\033[0m" << endl;
    cout << "\033[1;35m5. Gacha Weapon (1% Chance Legendary Bow)\033[0m" << endl;
    cout << "\033[1;31m6. Exit\n\033[0m" << endl;
    string pilihan_M;
    cout << "What's your choice ? : ";
    cin >> pilihan_M;

    if (pilihan_M == "1" || pilihan_M == "2" || pilihan_M == "3" || pilihan_M == "4" || pilihan_M == "5") {
        cout << "Thanks Rajegh warrior" << endl;
        sleep(1);
    } else {
        cout << "\033[1;37mThanks For Stopping By Rajegh warrior\033[0m" << endl;
        sleep(1);
    }
}

void Tavern() {
    system("clear");
    cout << "\033[1;32mHello Rajegh Warrior Welcome To The Tavern\033[0m" << endl;
    sleep(1);
    cout << "You Need Something ?\n" << endl;
    sleep(1);
    cout << "\033[1;31m1. Mie Rajegh         (+50Hp)\033[0m" << endl;
    cout << "\033[1;34m2. Air Putih          (Just normal water)\033[0m" << endl;
    cout << "\033[1;33m3. Sprite             (+50SP)\033[0m" << endl;
    cout << "\033[1;31m4. Health Potion      (+100Hp)\033[0m" << endl;
    cout << "\033[1;33m5. Skill Point Potion (+100Sp)\033[0m" << endl;
    cout << "\033[1;32mq. Exit Tavern\n\033[0m" << endl;
    string pilihan_T;
    cout << "What's your choice Rajegh ? : ";
    cin >> pilihan_T;

    if (pilihan_T == "1" || pilihan_T == "2" || pilihan_T == "3" || pilihan_T == "4" || pilihan_T == "5") {
        cout << "Thanks Rajegh warrior" << endl;
        sleep(1);
    } else {
        cout << "\033[1;37mThanks For Stopping By Rajegh warrior\033[0m" << endl;
        sleep(1);
    }
}

void menu_player() {
    system("clear");
    cout << "\n\033[1;34mMenu :\n\033[0m" << endl;
    cout << "1. Go to Tavern" << endl;
    cout << "2. Go to Market" << endl;
    cout << "3. Backpack" << endl;
    cout << "4. Map" << endl;
    cout << "5. Exit\n" << endl;
    string pilihan_P;
    cout << "Enter your choice : ";
    cin >> pilihan_P;

    if (pilihan_P == "1") {
        Tavern();
    } else if (pilihan_P == "2") {
        Market();
    } else if (pilihan_P == "3") {
        Backpack();
    } else if (pilihan_P == "4") {
        cout << "1" << endl;
    } else {
        cout << "See You Soon Rajegh" << endl;
        exit(0);
    }
}

void mainGame() {
    system("clear");
    cout << "\033[1;34m======== Rajegh Warrior Adventure ========\n\033[0m" << endl;
    cout << "Enter Name : ";
    cin >> Name;
    cout << "\nChoose Role:\n" << endl;
    cout << "1. Ksatria" << endl;
    cout << "2. Pemanah" << endl;
    cout << "3. Medis" << endl;
    cout << "4. Exit" << endl;
    int pilihan;
    cout << "\nEnter your choice : ";
    cin >> pilihan;

    if (pilihan == 1 || pilihan == 2 || pilihan == 3) {
        system("clear");
        cout << "Your Role is ";
        if (pilihan == 1) {
            cout << "Ksatria" << endl;
        } else if (pilihan == 2) {
            cout << "Pemanah" << endl;
        } else {
            cout << "Medis" << endl;
        }
        menu_player();
    } else {
        system("clear");
        cout << "Goodbye Rajegh" << endl;
        sleep(1);
        exit(0);
    }
}

int main() {
    srand(time(0));
    mainGame();
    return 0;
}

