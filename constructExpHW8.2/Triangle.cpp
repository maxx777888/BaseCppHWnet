#include "Triangle.h"
#include <iostream>

Triangle::Triangle() { a = b = c = 0; A = B = C = 0; }//Пустой конструктор
Triangle::Triangle(int a_, int b_, int c_, int A_, int B_, int C_) //Конструктор базового класса 
{
    a = a_;
    b = b_;
    c = c_;
    A = A_;
    B = B_;
    C = C_;
    name = "Треугольник";
    //Проверка агрументов на корректность фигуры
    if ((A + B + C) != 180)
        throw ExcClass("сумма углов не равна 180");
    else {
        triangle_created(a, b, c, A, B, C);
    }
        
}
//Метод для уведомления при успешном создании фигуры
void Triangle::triangle_created(int a_, int b_, int c_, int A_, int B_, int C_) {
    std::cout << name << " (стороны: " << a << ", " << b << ", " << c << "; ";
    std::cout << " углы: " << A << ", " << B << ", " << C << ") создан" << std::endl;
}


