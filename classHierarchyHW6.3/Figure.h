#pragma once
#include <string>

class Figure //Базовый Класс Фигура
{
public:
    //Метод возвращает название фигуры
    std::string get_name();
    //Виртуальный метод для вывода значений на экран
    virtual void printInfo() = 0;

protected:
    std::string name = "Фигура";//Хранение название фигуры 
};
//Функция, выводит на экран значения, наследуемого класса от базового класса Фигуры
void print_info(Figure* x);