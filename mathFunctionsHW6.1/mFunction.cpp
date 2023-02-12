#include <iostream>
#include "mFunctions.h"

//Функция сложения
void sum_func(int x, int y)
{
	std::cout << x << " + " << y << " = " << x+y <<std::endl;
 }
//Функция вычитания
void sub_func(int x, int y)
{
	std::cout << x << " - " << y << " = " << x - y << std::endl;
 }
//Функция умножения
void mul_func(int x, int y)
{
	std::cout << x << " * " << y << " = " << x * y << std::endl;
 }
//Функция деления
void div_func(int x, int y)
{
	if (y == 0)
	{
		std::cout << "Ошибка!!! На ноль делить нельзя." << std::endl;
	}
	else {
		double ans = (static_cast<double>(x) / y);
		std::cout << x << " / " << y << " = " << ans << std::endl;
	}
	
 }
//Функция возведения в степень
void exp_func(int x, int y)
{
	double ans = x;
	if (y == 0) { std::cout << x << " в степени " << y << " = " << 1 << std::endl; }
	if (y >= 1) {
		for (int i = 1; i < y; i++)
		{
			ans *= x;
		}
		std::cout << x << " в степени " << y << " = " << ans << std::endl;
	}
	else if (y < 0) {
		y = y * -1;
		for (int i = 1; i < y; i++)
		{
			ans *= x;
		}
		ans = 1 / ans;
		std::cout << x << " в степени " << y << " = " << ans << std::endl;
	}
 }
