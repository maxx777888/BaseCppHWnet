#include <iostream>
#include <string>
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

    //Экземпляр класса треугольник
    Triangle t(10, 20, 30, 50, 60, 70);
    print_info(&t);
    //Экземпляр класса прямоугольний треугольник
    RightTriangle rt(10, 20, 30, 50, 60);
    print_info(&rt);
    //Экземпляр класса равнобедренный треугольник
    IsoscelesTriangle i(10, 20, 50, 60);
    print_info(&i);
    //Экземпляр класса равносторонний треугольник
    EquilateralTriangle e(30);
    print_info(&e);
    //Экземпляр класса четырехугольник
    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&q);
    //Экземпляр класса прямоугольник
    RectangleF rf(10, 20);
    print_info(&rf);
    //Экземпляр класса квадрат
    Square s(20);
    print_info(&s);
    //Экземпляр класса параллелограмм
    Parallelogram p(20, 30, 30, 40);
    print_info(&p);
    //Экземпляр класса ромб
    Rhomb romb(30, 30, 40);
    print_info(&romb);
}

