#pragma once
#include <iostream>

class Fraction
	{
	
	public:
		Fraction();
		Fraction(int numerator, int denominator);
		
		
		friend std::ostream& operator<<(std::ostream& left, Fraction& f);
		
		//���������� ��������� �������� 
		Fraction operator + (Fraction f);
		
		//���������� ��������� ���������
		Fraction operator - (Fraction f);
		
		//���������� ��������� ���������
		Fraction operator * (Fraction f);
		
		//���������� ��������� �������
		Fraction operator / (Fraction f);
		
		//���������� ����������� ��������� ++
		Fraction& operator ++ ();
		
		//���������� ����������� ��������� --
		Fraction operator --();
		
		//���������� ������������ ��������� --
		Fraction operator --(int);
		
	private:
		int numerator_;
		int denominator_;
	
		Fraction reduce(Fraction a);
		
	
	};
std::ostream& operator<<(std::ostream& left, Fraction& f);
	


