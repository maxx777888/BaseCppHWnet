#include "Triangle.h"
#include <iostream>

Triangle::Triangle() { a = b = c = 0; A = B = C = 0; }//������ �����������
Triangle::Triangle(int a_, int b_, int c_, int A_, int B_, int C_) //����������� �������� ������ 
{
    a = a_;
    b = b_;
    c = c_;
    A = A_;
    B = B_;
    C = C_;
    name = "�����������";
    //�������� ���������� �� ������������ ������
    if ((A + B + C) != 180)
        throw ExcClass("����� ����� �� ����� 180");
    else {
        triangle_created(a, b, c, A, B, C);
    }
        
}
//����� ��� ����������� ��� �������� �������� ������
void Triangle::triangle_created(int a_, int b_, int c_, int A_, int B_, int C_) {
    std::cout << name << " (�������: " << a << ", " << b << ", " << c << "; ";
    std::cout << " ����: " << A << ", " << B << ", " << C << ") ������" << std::endl;
}


