#include <iostream>

enum class months
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int m = 0;
    
    do {
        std::cout << "Введите номер месяца: \n";
        std::cin >> m;
        switch (static_cast<months>(m))
        {
        case months::January:
            std::cout << "Январь" << std::endl;
                break;
        case months::February:
            std::cout << "Февраль" << std::endl;
            break;
        case months::March:
            std::cout << "Март" << std::endl;
            break;
        case months::April:
            std::cout << "Апрель" << std::endl;
            break;
        case months::May:
            std::cout << "Май" << std::endl;
            break;
        case months::June:
            std::cout << "Июнь" << std::endl;
            break;
        case months::July:
            std::cout << "Июль" << std::endl;
            break;
        case months::August:
            std::cout << "Август" << std::endl;
            break;
        case months::September:
            std::cout << "Сентябрь" << std::endl;
            break;
        case months::October:
            std::cout << "Октябрь" << std::endl;
            break;
        case months::November:
            std::cout << "Ноябрь" << std::endl;
            break;
        case months::December:
            std::cout << "Декабрь" << std::endl;
            break;
        case static_cast<months>(0):
            std::cout << "До свидания" << std::endl;
            break;            
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
    } while (m != 0);
}




