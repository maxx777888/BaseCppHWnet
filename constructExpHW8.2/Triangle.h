#pragma once
#include "Figure.h"

class Triangle : public Figure//������� ������� ����� ����������� 
{
public:
    Triangle();//������ �����������
    Triangle(int a_, int b_, int c_, int A_, int B_, int C_); //����������� �������� ������ 

    void triangle_created(int a_, int b_, int c_, int A_, int B_, int C_);
    
protected:
    int a, b, c;//�������� ������
    int A, B, C;//�������� �����
};

