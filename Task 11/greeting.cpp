#include <iostream>
#include <ostream>
//
// Created by DeLife on 20.11.2026.
//
using namespace std;

int times;

int main() {
    cout << "Какой текущий час: ";
    cin >> times;

    if (times < 6) {
        cout << "Доброй ночи" << endl;
    }
    else if (times < 12) {
        cout << "Доброе утро" << endl;
    }
    else if (times < 18) {
        cout << "Добрый день" << endl;
    }
    else {
        cout << "Добрый вечер" << endl;
    }

    return 0;
}