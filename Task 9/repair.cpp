//
// Created by DeLife on 19.11.2026.
//
#include <iostream>
// Не хватало "i", ";", ">"
int main()
{
    int goals = 27;                         // строка А
    double avgGoals = static_cast<double>(goals) / 8;   // строка Б
    std::cout << "Всего голов: " << goals << std::endl;
    std::cout << "Среднее за матч: " << avgGoals << std::endl;
    std::cout << "Мячей сыграно: " << static_cast<int>(8.9) << std::endl;  // строка В
    return 0;
}
