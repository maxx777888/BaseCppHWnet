#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle();//������ �����������
    Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_); //����������� �������� ������  
    void quadrangle_created(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);
protected:
    int a, b, c, d;
    int A, B, C, D;
};

