#include "Rhomb.h"

Rhomb::Rhomb(int a_, int A_, int B_) {//����������� ������
    a = c = b = d = a_;
    A = C = A_;
    B = D = B_;
    name = "����";
    //�������� ���������� �� ������������ ������
    if (a != c || b != d || a != b || a != d || A != C || B != D || A != B)
        throw ExcClass("������� �� �����, ���� A,C � B,D ������� �� �����");
    else {
        quadrangle_created(a, b, c, d, A, B, C, D);
    }
}
