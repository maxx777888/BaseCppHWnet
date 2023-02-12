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
}
//Методы для получения информации о значении сторон и углов
int Quadrangle::get_a() { return a; };//Метод возвращает значение стороны a
int Quadrangle::get_b() { return b; };//Метод возвращает значение стороны b
int Quadrangle::get_c() { return c; };//Метод возвращает значение стороны c
int Quadrangle::get_d() { return d; };//Метод возвращает значение стороны d
int Quadrangle::get_A() { return A; };//Метод возвращает значение угла A
int Quadrangle::get_B() { return B; };//Метод возвращает значение угла B
int Quadrangle::get_C() { return C; };//Метод возвращает значение угла C
int Quadrangle::get_D() { return D; };//Метод возвращает значение угла D

//Переписанный метод для вывода значений на экран экземляров класса Четырехугольник
void Quadrangle::printInfo()
{
    std::cout << get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
    std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    std::cout << std::endl;
}
