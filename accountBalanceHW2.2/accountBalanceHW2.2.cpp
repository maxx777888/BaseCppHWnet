#include <iostream>
#include <string>

struct bankAccount
{
    int number;
    std::string name;
    double balance;
};

double new_balance(bankAccount& p, double n)
{
   return p.balance = n;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int p_num_account;
    std::string p_name; 
    double p_balance;   
    bankAccount person = { 1232563, "Андрей", 12542772654.22 };

    std::cout << "Введите номер счёта:\n"; //Запрашиваем номер счета
    std::cin >> p_num_account;
    person.number = p_num_account;
    
    std::cout << "Введите имя владельца:\n";//Запрашиваем имя
    std::cin >> p_name;
    person.name = p_name;

    std::cout << "Введите баланс:\n"; //Запрашиваем баланс
    std::cin >> p_balance;
    person.balance = p_balance;

    std::cout << "Введите новый баланс:\n";//Запрашиваем новый баланс
    std::cin >> p_balance;
    new_balance(person, p_balance); //Передача нового баланса в функцию. 

    std::cout << "Ваш счет: " << person.name << ", " << person.number << ", " << person.balance << std::endl;

}

