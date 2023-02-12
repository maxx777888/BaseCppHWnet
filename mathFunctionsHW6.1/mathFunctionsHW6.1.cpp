#include <iostream>
#include <Windows.h>
#include "mFunctions.h"


int main()
{
    //Необходимые настройки консоли, для правильной работы с русским языком.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int a, b, c;
    std::cout << "Введите первое число:" << std::endl;
    std::cin >> a;
    std::cout << "Введите второе число:" << std::endl;
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):" << std::endl;
    std::cin >> c;
    //В зависимости от выбора пользователя запускаем функцию
    switch (c)
    {
    case 1: sum_func(a, b);
        break;
    case 2: sub_func(a, b);
        break;
    case 3: mul_func(a, b);
        break;
    case 4: div_func(a, b);
        break;
    case 5: exp_func(a, b);
        break;
    default:
        std::cout << "Нет такой опции!!!" << std::endl;
        break;
    }

}
