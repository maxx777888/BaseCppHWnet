#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int sizes)//Конструктор класса
{
    a = b = c = sizes;
    A = B = C = 60;
    name = "Равносторонний треугольник";
    //Проверка агрументов на корректность фигуры
    if (a != b || b !=c || c != a || A != 60 || B != 60 || C != 60)
        throw ExcClass("стороны не равны.");
    else {
        triangle_created(a, b, c, A, B, C);
    }
}
