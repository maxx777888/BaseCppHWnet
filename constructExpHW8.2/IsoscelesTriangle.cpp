#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int size_ac, int b_, int size_AC, int B_)//Конструктор класса
{
    a = c = size_ac;
    b = b_;
    A = C = size_AC;
    B = B_;
    name = "Равнобедренный треугольник";
    //Проверка агрументов на корректность фигуры
    if (a != c ||  A !=  C)
        throw ExcClass("стороны а и с или углы А и С не равны.");
    else {
        triangle_created(a, b, c, A, B, C);
    }
}
