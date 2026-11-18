#include <iostream>
#include <ostream>
//
// Created by DeLife on 18.11.2026.
//

// с int все ломается и программа вводит не правильные ответы.
double degree = 0;
int main () {
    std::cout << "Введите температуру в градусах цельсия: ";
    std::cin >> degree;
    std::cout << "Градусы в фаренгейтах: " << degree * 1.8 + 32 << std::endl;

    std::cout << "Введите температуру в фаренгейтах: ";
    std::cin >> degree;
    std::cout << "Градусы в цельсия: " << (degree - 32) / 1.8 << std::endl;
    return 0;
}