#include <iostream>
#include "mFunctions.h"

//������� ��������
void sum_func(int x, int y)
{
	std::cout << x << " + " << y << " = " << x+y <<std::endl;
 }
//������� ���������
void sub_func(int x, int y)
{
	std::cout << x << " - " << y << " = " << x - y << std::endl;
 }
//������� ���������
void mul_func(int x, int y)
{
	std::cout << x << " * " << y << " = " << x * y << std::endl;
 }
//������� �������
void div_func(int x, int y)
{
	if (y == 0)
	{
		std::cout << "������!!! �� ���� ������ ������." << std::endl;
	}
	else {
		double ans = (static_cast<double>(x) / y);
		std::cout << x << " / " << y << " = " << ans << std::endl;
	}
	
 }
//������� ���������� � �������
void exp_func(int x, int y)
{
	double ans = x;
	if (y == 0) { std::cout << x << " � ������� " << y << " = " << 1 << std::endl; }
	if (y >= 1) {
		for (int i = 1; i < y; i++)
		{
			ans *= x;
		}
		std::cout << x << " � ������� " << y << " = " << ans << std::endl;
	}
	else if (y < 0) {
		y = y * -1;
		for (int i = 1; i < y; i++)
		{
			ans *= x;
		}
		ans = 1 / ans;
		std::cout << x << " � ������� " << y << " = " << ans << std::endl;
	}
 }
