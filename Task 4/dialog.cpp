//
// Created by DeLife on 13.11.2026.
//

#include <iostream>
#include <string>

int main()
{
    std::string name;
    int birthYear;
    int number;
    std::cout << "Как вас зовут? ";
    std::cin >> name;
    std::cout << "В каком году вы родились? ";
    std::cin >> birthYear;
    std::cout << "Ваше любимое число: ";
    std::cin >> number;
    std::cout << "Привет, " << name << "!" << std::endl;
    std::cout << "Вам примерно " << 2026 - birthYear << " лет." << std::endl;
    std::cout << "Ваше любимое число увеличинное вдвое: " << number * 2 << std::endl;
    return 0;
}

