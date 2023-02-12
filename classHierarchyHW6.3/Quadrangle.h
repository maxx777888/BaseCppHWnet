#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle();//Пустой конструктор
    Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_); //Конструктор базового класса 
    
    //Методы для получения информации о значении сторон и углов
    int get_a();//Метод возвращает значение стороны a
    int get_b();//Метод возвращает значение стороны b
    int get_c();//Метод возвращает значение стороны c
    int get_d();//Метод возвращает значение стороны d
    int get_A();//Метод возвращает значение угла A
    int get_B();//Метод возвращает значение угла B
    int get_C();//Метод возвращает значение угла C
    int get_D();//Метод возвращает значение угла D

    //Переписанный метод для вывода значений на экран экземляров класса Четырехугольник
    void printInfo() override;
    
protected:
    int a, b, c, d;
    int A, B, C, D;
};

