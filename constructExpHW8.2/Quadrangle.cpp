#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle() { a = b = c = d = 0; A = B = C = D = 0; }//Пустой конструктор
Quadrangle::Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_) //Конструктор базового класса 
{
    a = a_;
    b = b_;
    c = c_;
    d = d_;
    A = A_;
    B = B_;
    C = C_;
    D = D_;
    name = "Четырехугольник";
    //Проверка агрументов на корректность фигуры
    if ((A + B + C + D) != 360)
        throw ExcClass("сумма углов не равна 360");
    else {
        quadrangle_created(a, b, c, d, A, B, C, D);
    }
        
}
//Метод для уведомления при успешном создании фигуры
void Quadrangle::quadrangle_created(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_) {
    std::cout << name << " (стороны: " << a << ", " << b << ", " << c << ", " << d << "; ";
    std::cout << " углы: " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;
}