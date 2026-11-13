#include <iostream>
#include <ostream>
//
// Created by DeLife on 13.11.2026.
//
int times = 0;

int main () {
    std::cout << "Минуты в часы и минуты" << std::endl;
    std::cout << "Введите минуты: ";
    std::cin >> times;

    std::cout << "Часов: " << times / 60 << " Минут: " << times % 60 <<std::endl;
}
