#include "RectangleF.h"

RectangleF::RectangleF(int a_, int b_) {//����������� ������
    a = c = a_;
    b = d = b_;
    A = B = C = D = 90;
    name = "�������������";
    //�������� ���������� �� ������������ ������
    if (a != c || b != d || a != b || A != 90 || B != 90 || C != 90 || D != 90)
        throw ExcClass("������� a,c � b,d ������� �� ����� ��� ���� �� ����� 90");
    else {
        quadrangle_created(a, b, c, d, A, B, C, D);
    }
}
