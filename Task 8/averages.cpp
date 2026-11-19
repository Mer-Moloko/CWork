#include <iostream>
#include <sstream>
//
// Created by DeLife on 19.11.2026.
//
std::string line;
int num;
int sum;
int i;

int main () {
    std::cout << "Введите значения через пробел: ";

    std::getline(std::cin, line);
    std::istringstream iss(line);

    while (iss >> num) {
        sum += num;
        i += 1;
    }

    std::cout << "Целочисленное деление: " << sum / i << std::endl;
    std::cout << "Дробное деление: " << static_cast<double>(sum) / i<< std::endl;

    return 0;
}
