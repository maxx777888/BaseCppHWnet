#include <iostream>
#include <Windows.h>

//Создаем макрос и вносим весь функционал и аргументы в скобки 
//Иначе логика ломается и выводятся неправильные значения
#define SUB(a,b) ((a) - (b))

int main()
{
	//Необходимые настройки консоли, для правильной работы с русским языком.
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	//Условия задачи
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}
