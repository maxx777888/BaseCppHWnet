#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int sizes)//����������� ������
{
    a = b = c = sizes;
    A = B = C = 60;
    name = "�������������� �����������";
    //�������� ���������� �� ������������ ������
    if (a != b || b !=c || c != a || A != 60 || B != 60 || C != 60)
        throw ExcClass("������� �� �����.");
    else {
        triangle_created(a, b, c, A, B, C);
    }
}
