#include "Rhomb.h"

Rhomb::Rhomb(int a_, int A_, int B_) {//Конструктор класса
    a = c = b = d = a_;
    A = C = A_;
    B = D = B_;
    name = "Ромб";
    //Проверка агрументов на корректность фигуры
    if (a != c || b != d || a != b || a != d || A != C || B != D || A != B)
        throw ExcClass("стороны не равны, углы A,C и B,D попарно не равны");
    else {
        quadrangle_created(a, b, c, d, A, B, C, D);
    }
}
