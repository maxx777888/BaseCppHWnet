#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
	//����������� ��������� �������, ��� ���������� ������ � ������� ������.
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	std::string name;
	std::cout << "������� ���: " << std::endl;
	std::cin >> name;
	std::cout << "������������, " << name << "!" << std::endl;

	return 0;
}