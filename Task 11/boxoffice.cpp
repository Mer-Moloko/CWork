#include <iostream>
//
// Created by DeLife on 20.11.2026.
//
using namespace std;

const int PIN = 1234;

int choice;
int money;
string status;

int main () {
    cout << "Введите пин код: ";
    cin >> choice;

    if (choice == PIN) {
        cout << "Вы угадали пин код!" << endl;
        cout << "Введите возраст: ";

        cin >> choice;

        if (choice < 12) {
            status = "детский (100 руб)";
            money = 100;
        }
        else if (choice < 17) {
            status = "школьный (150 руб";
            money = 150;
        }
        else if (choice < 64) {
            status = "взрослый (250 руб)";
            money = 250;
        }
        else {
            status = "пенсионный (120 руб)";
            money = 120;
        }

        cout << "Введите кол-во билетов: ";

        cin >> choice;

        cout << "Категория: " << status << endl;
        cout << "К оплате: " << choice * money << endl;

    }
    else {
        cout << "Вы не угадали пин код..." << endl;
        return 0;
    }

}