#include <iostream>
#include <string>
#include <windows.h>
#include "Fraction.h"


int main()
{ 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	int numer, denom = 0;
	std::cout << "Введите числитель дроби 1: " << std::endl;
	std::cin >> numer;
	std::cout << "Введите знаменатель дроби 1: " << std::endl;
	std::cin >> denom;
	while (denom <= 0)
	{
		std::cout << "Знаменатель не может быть равен или меньше нуля!" << std::endl;
		std::cout << "Введите знаменатель дроби 1 больше нуля: " << std::endl;
		std::cin >> denom;
	}
	Fraction f1(numer, denom);//Первая дробъ

	std::cout << "Введите числитель дроби 2: " << std::endl;
	std::cin >> numer;
	std::cout << "Введите знаменатель дроби 2: " << std::endl;
	std::cin >> denom;
	while (denom <= 0)
	{
		std::cout << "Знаменатель не может быть равен или меньше нуля!" << std::endl;
		std::cout << "Введите знаменатель дроби 2 больше нуля: " << std::endl;
		std::cin >> denom;
	}
	Fraction f2(numer, denom);//Вторая дробъ
	Fraction c;//Вспомогательный объект класса Fraction, созданый для вывода значений на консоль
	
	//Выводы значений из задания на консоль
	std::cout << f1 << " + " << f2 << " = " << (c =  f1 + f2) << std::endl;
	
	std::cout << f1 << " - " << f2 << " = " << (c = f1 - f2) << std::endl;
	
	std::cout << f1 << " * " << f2 << " = " << (c = f1 * f2) << std::endl;

	std::cout << f1 << " / " << f2 << " = " << (c = f1 / f2) << std::endl;

	std::cout << "++" << f1 << " * " << f2 << " = ";
	std::cout << (c = ++f1 * f2) << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;

	std::cout << f1 << "--" << " * " << f2 << " = ";
	std::cout << (c = f1-- * f2) << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;

	return 0;
}