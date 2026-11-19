#include <iostream>
//
// Created by DeLife on 18.11.2026.
//
int radius = 0;

int main () {
    std::cout << "Введите радиус: ";
    std::cin >> radius;
    std::cout << "Площадь: " << radius * radius * 3.14159;
    return 0;
}
