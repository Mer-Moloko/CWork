#include <iostream>
#include <ostream>
//
// Created by DeLife on 19.11.2026.
//
std::string playerName;
int points;
double gameHours;
const int record = 2000;

int main () {
    std::cout << "Введите имя игрока, сумарные очки и часы игры через пробел: " << std::endl;
    std::cin >> playerName >> points >> gameHours;

    std::cout << "Игрок: " << playerName << std::endl;
    std::cout << "Очки: " << points << " Уровень: " << points / 1000 << std::endl;
    std::cout << "Прогресс до уровня " << (points / 1000) + 1 << ": " << std::round((points % 1000) / 1000.0 * 100) << "%" << std::endl;
    std::cout << "Миллисекунд в игре: " << gameHours * 3600000LL << std::endl;
    std::cout << "Ранг: " << static_cast<char>('D' - points / 1000) << std::endl;
    std::cout << "Рекорд побит: " << points / record << std::endl;
    return 0;
}