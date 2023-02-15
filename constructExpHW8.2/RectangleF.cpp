#include "RectangleF.h"

RectangleF::RectangleF(int a_, int b_) {//Конструктор класса
    a = c = a_;
    b = d = b_;
    A = B = C = D = 90;
    name = "Прямоугольник";
    //Проверка агрументов на корректность фигуры
    if (a != c || b != d || a != b || A != 90 || B != 90 || C != 90 || D != 90)
        throw ExcClass("стороны a,c и b,d попарно не равны или углы не равны 90");
    else {
        quadrangle_created(a, b, c, d, A, B, C, D);
    }
}
