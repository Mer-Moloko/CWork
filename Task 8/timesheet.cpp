#include <iostream>
#include <ostream>
//
// Created by DeLife on 19.11.2026.
//
double times;
int bid;

int main () {
    std::cout << "Введите отработанное время в часах: ";
    std::cin >> times;

    std::cout << "Введите часовую ставку в рублях: ";
    std::cin >> bid;

    int kopecks = std::round(times * bid * 100);
    int hours = static_cast<int>(times);

    std::cout << "Время: " << hours << "ч " << static_cast<int>(std::round((times - hours) * 60))<< "м" << std::endl;
    std::cout << "Заработок: " << kopecks / 100 << "руб " << kopecks % 100 << "коп" << std::endl;



    return 0;
}