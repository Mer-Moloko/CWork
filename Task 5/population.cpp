#include <iostream>
#include <ostream>
//
// Created by DeLife on 18.11.2026.
//
// компилятор не ругается на int earth, но вывод конечно не правильный.
long long population_city = 0LL;
long long population_country = 0LL;
long long earth = 8100000000LL;
int main() {
    std::cout << "Введите насиление города: ";
    std::cin >> population_city;
    std::cout << "Введите насиление страны: ";
    std::cin >> population_country;

    std::cout << "Итого: " << population_country + population_city << std::endl;
    std::cout << "Население заемли: " << earth << std::endl;
    return 0;
}