#include "Parallelogram.h"

Parallelogram::Parallelogram(int a_, int b_, int A_, int B_) {//Конструктор класса
    a = c = a_;
    b = d = b_;
    A = C = A_;
    B = D = B_;
    name = "Параллелограмм";
    //Проверка агрументов на корректность фигуры
    if (a != c || b != d || a != b || A != C || B != D || A != B )
        throw ExcClass("стороны a,c и b,d попарно не равны или углы A,C и B,D попарно не равны");
    else {
        quadrangle_created(a, b, c, d, A, B, C, D);
    }
}