#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "RectangleF.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"


int main()
{
    //Необходимые настройки консоли, для правильной работы с русским языком.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

	try
	{
        //Попытка создать экземляры классов
        Triangle t(10, 20, 30, 50, 60, 70);
       
        RightTriangle rt(10, 20, 30, 50, 60);
        
        IsoscelesTriangle i(10, 20, 50, 60);
        
        EquilateralTriangle e(30);
        
        Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
        
        RectangleF rf(10, 20);
        
        Square s(20);
        
        Parallelogram p(20, 30, 30, 40);
        
        Rhomb romb(30, 30, 40);
        
		

	}
	catch (ExcClass &e)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
}

