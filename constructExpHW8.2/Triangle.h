#pragma once
#include "Figure.h"

class Triangle : public Figure//Создаем базовый класс Треугольник 
{
public:
    Triangle();//Пустой конструктор
    Triangle(int a_, int b_, int c_, int A_, int B_, int C_); //Конструктор базового класса 

    void triangle_created(int a_, int b_, int c_, int A_, int B_, int C_);
    
protected:
    int a, b, c;//Хранение сторон
    int A, B, C;//Хранение углов
};

