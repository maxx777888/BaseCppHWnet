#include "Square.h"

Square::Square(int a_) {//����������� ������
    a = c = b = d = a_;
    A = B = C = D = 90;
    name = "�������";
    //�������� ���������� �� ������������ ������
    if (a != c || b != d || a != b || c != d || A != 90 || B != 90 || C != 90 || D != 90)
        throw ExcClass("������� �� ����� ��� ���� �� ����� 90");
    else {
        quadrangle_created(a, b, c, d, A, B, C, D);
    }
}
