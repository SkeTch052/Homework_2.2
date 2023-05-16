#include <iostream>
#include <string>
#include <windows.h>

struct client {
    std::string name = "Ivan";
    int acc_number = 123456789;
    double balance = 0;
};

void SetBalance(client& User, double& new_balance) {
    User.balance = new_balance;
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int user_acc;
    std::string user_name;
    double new_balance;

    client Andr;
    Andr.name = "Андрей";
    Andr.acc_number = 123456789;
    Andr.balance = 1000.25;

    std::cout << "Введите номер счёта: ";
    std::cin >> user_acc;
    while (user_acc != Andr.acc_number) {
            std::cout << "Ошибка! Счёт не найден. Повторите попытку: ";
            std::cin >> user_acc;
        }

    std::cout << "Введите имя владельца: ";
    std::cin >> user_name;
    while (user_name != Andr.name) {
        std::cout << "Ошибка! Некорректное имя владельца. Повторите попытку: ";
        std::cin >> user_name;
    }

    std::cout << "Введите новый баланс: ";
    std::cin >> new_balance;
    SetBalance(Andr, new_balance);

    std::cout << "Ваш счёт: " << Andr.name << ", " << Andr.acc_number << ", " << Andr.balance << std::endl;
    return 0;
}