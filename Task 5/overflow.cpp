#include <iostream>
#include <ostream>
//
// Created by DeLife on 18.11.2026.
//
int a = 2147483647;
int main() {
    std::cout << "Было: " << a << std::endl;
    std::cout << "Стало: " << a + 1 << std::endl;
    std::cout << "Умножено на 2: " << a * 2 << std::endl;
    return 0;
}