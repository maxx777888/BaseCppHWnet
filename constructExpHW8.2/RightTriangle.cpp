#include "RightTriangle.h"

RightTriangle::RightTriangle(int a_, int b_, int c_, int A_, int B_)//����������� ������
{
    a = a_;
    b = b_;
    c = c_;
    A = A_;
    B = B_;
    C = 90;
    name = "������������� �����������";
    //�������� ���������� �� ������������ ������
    if (C != 90)
        throw ExcClass("����� ����� �� ����� 180");
    else {
        triangle_created(a, b, c, A, B, C);
    }
}