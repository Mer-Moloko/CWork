#include <iostream>
//
// Created by DeLife on 18.11.2026.
//
int digit = 0;

int main() {
    std::cout << "Введите число: ";
    std::cin >> digit;
    std::cout << "Цифры: " << digit / 10 << " и " << digit % 10 << std::endl;
    return 0;
}