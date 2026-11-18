#include <iostream>
//
// Created by DeLife on 18.11.2026.
//
int weight = 0;
int inch = 0;

int main() {
    std::cout << "Введите вес в фунтах: ";
    std::cin >> weight;
    std::cout << "Вес в килограммах: " << weight * 0.453592 << std::endl;

    std::cout << "Введите длинну в дюймах: ";
    std::cin >> inch;
    std::cout << "Длинна в сантиметрах: " << inch * 2.54 << std::endl;

    return 0;
}
