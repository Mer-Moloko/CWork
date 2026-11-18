#include <iostream>
//
// Created by DeLife on 18.11.2026.
//
double distance = 0;
double times = 0;
int main() {
    std::cout << "Введите расстояние: ";
    std::cin >> distance;

    std::cout << "Введите время: ";
    std::cin >> times;

    std::cout << "Скорость: " << distance / times << std::endl;
    return 0;
}