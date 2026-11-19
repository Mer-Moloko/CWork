#include <iostream>
//
// Created by DeLife on 18.11.2026.
//

// После Z программа напечтает фигурную скобку
char chars;

int main () {
    std::cout << "Введите букву: ";
    std::cin >> chars;
    std::cout << "Следующий символ: " << static_cast<char>(chars + 1);
    return 0;
}