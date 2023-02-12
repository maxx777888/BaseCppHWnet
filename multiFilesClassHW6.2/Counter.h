#pragma once
#include <string>

class Counter
{
public:

    //Конструктор без параметров
    Counter();
    //Конструктор с параметрами заданными пользователем
    Counter(int _count);
    //Метод вывода на экран текущего состояния счетчика
    void print_count();
    //Метод добавление к счетчику единицы
    void add();
    //Метод вычетания из счетчика единицы
    void sub();

private:
    int count;
};

//Проверка на изначальный выбор пользователя для инициализации счетчика
bool is_YES(std::string str);