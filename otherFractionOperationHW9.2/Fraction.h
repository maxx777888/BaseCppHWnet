#pragma once
#include <iostream>

class Fraction
	{
	
	public:
		Fraction();
		Fraction(int numerator, int denominator);
		
		
		friend std::ostream& operator<<(std::ostream& left, Fraction& f);
		
		//Перегрузка оператора сложение 
		Fraction operator + (Fraction f);
		
		//Перегрузка оператора вычитания
		Fraction operator - (Fraction f);
		
		//Перегрузка оператора умножения
		Fraction operator * (Fraction f);
		
		//Перегрузка оператора деления
		Fraction operator / (Fraction f);
		
		//Перегрузка префиксного оператора ++
		Fraction& operator ++ ();
		
		//Перегрузка префиксного оператора --
		Fraction operator --();
		
		//Перегрузка постфиксного оператора --
		Fraction operator --(int);
		
	private:
		int numerator_;
		int denominator_;
	
		Fraction reduce(Fraction a);
		
	
	};
std::ostream& operator<<(std::ostream& left, Fraction& f);
	


