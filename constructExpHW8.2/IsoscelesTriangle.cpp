#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int size_ac, int b_, int size_AC, int B_)//����������� ������
{
    a = c = size_ac;
    b = b_;
    A = C = size_AC;
    B = B_;
    name = "�������������� �����������";
    //�������� ���������� �� ������������ ������
    if (a != c ||  A !=  C)
        throw ExcClass("������� � � � ��� ���� � � � �� �����.");
    else {
        triangle_created(a, b, c, A, B, C);
    }
}
