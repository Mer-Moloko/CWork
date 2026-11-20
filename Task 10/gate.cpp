#include <iostream>
#include <ostream>
//
// Created by DeLife on 20.11.2026.
//
using namespace std;

int age;
int passInput;

int main() {
    cout << "Введите возраст и код пропуска: ";
    cin >> age >> passInput;

    bool hasPass = passInput != 0;

    cout << "Взрослый: " << (age >= 18) << endl;
    cout << "Допуск в зал: " << ((age >= 18) && (hasPass)) << endl;
    cout << "Льгота: " << ((age <= 12) || (age >= 65)) << endl;
    cout << "Отказ: " << (hasPass == 0) <<  endl;
    cout << "Совпадение де Моргана: " << !((age < 18 || !hasPass)) << " " << (age >= 18 && hasPass) <<  endl;
    return 0;
}