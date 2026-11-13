//
// Created by DeLife on 13.11.2026.
//

#include <iostream>
int a = 0;
int b = 0;

int main()
{
    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите первое число: ";
    std::cin >> b;

    std::cout << "Сумма чисел: " << a + b << std::endl;
    std::cout << "Разность чисел: " << a - b << std::endl;
    std::cout << "Произвеление чисел: " << a * b << std::endl;

    return 0;
}
