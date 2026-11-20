//
// Created by DeLife on 19.11.2026.
//
#include <iostream>

int main()
{
    double price;
    std::cout << "Введите цену: ";
    std::cin >> price;
    int kopecks = static_cast<int>(price * 100 + 0.5);
    std::cout << "Рублей: " << kopecks / 100 << std::endl;
    std::cout << "Копеек: " << kopecks % 100 << std::endl;
    std::cout << "Итого: " << kopecks / 100 << " руб " << kopecks % 100 << " коп " << std::endl;
    return 0;
}
