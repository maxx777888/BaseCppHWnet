#include "RightTriangle.h"

RightTriangle::RightTriangle(int a_, int b_, int c_, int A_, int B_)//Конструктор класса
{
    a = a_;
    b = b_;
    c = c_;
    A = A_;
    B = B_;
    C = 90;
    name = "Прямоугольный треугольник";
    //Проверка агрументов на корректность фигуры
    if (C != 90)
        throw ExcClass("сумма углов не равна 180");
    else {
        triangle_created(a, b, c, A, B, C);
    }
}