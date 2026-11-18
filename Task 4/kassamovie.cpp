#include <iostream>
#include <ostream>
//
// Created by DeLife on 13.11.2026.
//

int times, price, tickets, sum;

int main() {
    std::cout << "Касса кинотеатра" << std::endl;

    std::cout << "Длительность сеанса в минутах: " << std::endl;
    std::cin >> times;

    std::cout << "Цена билета: " << std::endl;
    std::cin >> tickets;

    std::cout << "Кол-во билетов: " << std::endl;
    std::cin >> price;

    std::cout << "Сумма: " << std::endl;
    std::cin >> sum;

    std::cout << "\nСеанс длится: Часов: " << times / 60 << " Минут: " << times % 60 <<std::endl;
    std::cout << "К оплате: " << tickets * price << std::endl;
    std::cout << "Сдача: " << sum - (tickets * price) << std::endl;

    std::cout << "\nСпасибо";
    return 0;
}