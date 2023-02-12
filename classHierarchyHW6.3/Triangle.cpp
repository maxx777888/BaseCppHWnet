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
}
//Методы для получения информации о значении сторон и углов треугольника
int Triangle::get_a() { return a; };//Метод возвращает значение стороны a
int Triangle::get_b() { return b; };//Метод возвращает значение стороны b
int Triangle::get_c() { return c; };//Метод возвращает значение стороны c
int Triangle::get_A() { return A; };//Метод возвращает значение угла A
int Triangle::get_B() { return B; };//Метод возвращает значение угла B
int Triangle::get_C() { return C; };//Метод возвращает значение угла C

//Переписанный метод для вывода значений на экран экземляров класса Треугольник
void Triangle::printInfo() 
{
    std::cout << get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
    std::cout << "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
    std::cout << std::endl;
}
