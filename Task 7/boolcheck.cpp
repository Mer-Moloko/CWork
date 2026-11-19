#include <iostream>
#include <ostream>
//
// Created by DeLife on 18.11.2026.
//
int a = 0;
int b = 0;

int main () {
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "a == b:" << (a == b) << std::endl;
    std::cout << "a != b:" << (a != b) << std::endl;
    std::cout << "a > b:" << (a > b) << std::endl;
    std::cout << "a < b:" << (a < b) << std::endl;
    std::cout << "a >= b:" << (a >= b) << std::endl;
    std::cout << "a <= b:" << (a <= b) << std::endl;
    return 0;
}