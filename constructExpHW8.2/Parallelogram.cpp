#include "Parallelogram.h"

Parallelogram::Parallelogram(int a_, int b_, int A_, int B_) {//����������� ������
    a = c = a_;
    b = d = b_;
    A = C = A_;
    B = D = B_;
    name = "��������������";
    //�������� ���������� �� ������������ ������
    if (a != c || b != d || a != b || A != C || B != D || A != B )
        throw ExcClass("������� a,c � b,d ������� �� ����� ��� ���� A,C � B,D ������� �� �����");
    else {
        quadrangle_created(a, b, c, d, A, B, C, D);
    }
}