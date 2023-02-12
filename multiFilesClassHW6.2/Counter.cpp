#include "Counter.h"
#include <iostream>


//Конструктор без параметров
Counter::Counter() {
    count = 1;
}
//Конструктор с параметрами заданными пользователем
Counter::Counter(int _count) {
    count = _count;
}
//Метод вывода на экран текущего состояния счетчика
void Counter::print_count() {
    std::cout << "Значение счетчика: " << count << std::endl;
}
//Метод добавление к счетчику единицы
void Counter::add() {
    count += 1;
}
//Метод вычетания из счетчика единицы
void Counter::sub() {
    count -= 1;
}

//Проверка на изначальный выбор пользователя для инициализации счетчика
bool is_YES(std::string str)
{
	if ((str == "YES") || (str == "Yes") || (str == "yes") || (str == "Y") || (str == "y")|| (str == "ДА") || (str == "да") || (str == "Да")) {
		return true;
	}
	else {
		return false;
	}
}