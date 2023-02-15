#include "Square.h"

Square::Square(int a_) {//Конструктор класса
    a = c = b = d = a_;
    A = B = C = D = 90;
    name = "Квадрат";
    //Проверка агрументов на корректность фигуры
    if (a != c || b != d || a != b || c != d || A != 90 || B != 90 || C != 90 || D != 90)
        throw ExcClass("стороны не равны или углы не равны 90");
    else {
        quadrangle_created(a, b, c, d, A, B, C, D);
    }
}
