#include <iostream>
//
// Created by DeLife on 20.11.2026.
//
using namespace std;

int number;

int main() {
    cout << "Введите целое число: ";
    cin >> number;

    if (number > 0) {
        cout << "Число положительное!" << endl;
    }
    else if (number == 0) {
        cout << "Это же ноль!" << endl;
    }
    else {
        cout << "Число отрицательное!" << endl;
    }

    return 0;
}