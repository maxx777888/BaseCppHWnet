#include "Counter.h"
#include <iostream>


//����������� ��� ����������
Counter::Counter() {
    count = 1;
}
//����������� � ����������� ��������� �������������
Counter::Counter(int _count) {
    count = _count;
}
//����� ������ �� ����� �������� ��������� ��������
void Counter::print_count() {
    std::cout << "�������� ��������: " << count << std::endl;
}
//����� ���������� � �������� �������
void Counter::add() {
    count += 1;
}
//����� ��������� �� �������� �������
void Counter::sub() {
    count -= 1;
}

//�������� �� ����������� ����� ������������ ��� ������������� ��������
bool is_YES(std::string str)
{
	if ((str == "YES") || (str == "Yes") || (str == "yes") || (str == "Y") || (str == "y")|| (str == "��") || (str == "��") || (str == "��")) {
		return true;
	}
	else {
		return false;
	}
}