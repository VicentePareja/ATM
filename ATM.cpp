#include <iostream>

int main()
{

    int billete1 = 20000;
    int billete2 = 10000;
    int billete3 = 5000;
    int billete4 = 2000;
    int billete5 = 1000;

    std::cout << "Please, enter how many clp do you want to withdraw?\n";
    double initial_money;
    std::cin >> initial_money;

    if (initial_money >= 1000)
    {
        double current_money;
        current_money = initial_money;

        int cantidad_billete1 = current_money / billete1;
        current_money -= cantidad_billete1 * billete1;

        int cantidad_billete2 = current_money / billete2;
        current_money -= cantidad_billete2 * billete2;

        int cantidad_billete3 = current_money / billete3;
        current_money -= cantidad_billete3 * billete3;

        int cantidad_billete4 = current_money / billete4;
        current_money -= cantidad_billete4 * billete4;

        int cantidad_billete5 = current_money / billete5;
        current_money -= cantidad_billete5 * billete5;

        std::cout << "You recieve " << cantidad_billete1 << " bills of $" << billete1 << "\n";
        std::cout << "You recieve " << cantidad_billete2 << " bills of $" << billete2 << "\n";
        std::cout << "You recieve " << cantidad_billete3 << " bills of $" << billete3 << "\n";
        std::cout << "You recieve " << cantidad_billete4 << " bills of $" << billete4 << "\n";
        std::cout << "You recieve " << cantidad_billete5 << " bills of $" << billete5 << "\n";
    }
    if (initial_money < 1000)
    {
        std::cout << "You cannot withdraw that ammount.\n";
    }
}