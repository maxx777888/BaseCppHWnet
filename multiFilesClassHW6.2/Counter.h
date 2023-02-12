#pragma once
#include <string>

class Counter
{
public:

    //����������� ��� ����������
    Counter();
    //����������� � ����������� ��������� �������������
    Counter(int _count);
    //����� ������ �� ����� �������� ��������� ��������
    void print_count();
    //����� ���������� � �������� �������
    void add();
    //����� ��������� �� �������� �������
    void sub();

private:
    int count;
};

//�������� �� ����������� ����� ������������ ��� ������������� ��������
bool is_YES(std::string str);