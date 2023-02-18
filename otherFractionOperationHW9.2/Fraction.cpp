#include "Fraction.h"

Fraction Fraction::reduce(Fraction a)
{	
		//Для цикла поиска равного делителя используем модуль числителя
		int num = abs(a.numerator_);
		int den = a.denominator_;

		//Проверка на единицу, сразу вернуть дробь обратно
		if (num == 1 || num == 0) {
			return a;
		}

		//Поиск самого большого равного делителя 
		while (num != den)
		{
			if (num < den) {
				den -= num;
			}
			else {
				num -= den;
			}
		}
		//Сокращение на делитель
		a.numerator_ /= num;
		a.denominator_ /= den;
		return a;
	
}

Fraction::Fraction()
{
	numerator_ = denominator_ = 1;
}

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

Fraction Fraction::operator+(Fraction f)
{
	Fraction c;		
	c.numerator_ = numerator_ * f.denominator_ + denominator_ * f.numerator_;
	c.denominator_ = denominator_ * f.denominator_;		
	return reduce(c);
}

Fraction Fraction::operator-(Fraction f)
{
	Fraction c;
	c.numerator_ = numerator_ * f.denominator_ - denominator_ * f.numerator_;
	c.denominator_ = denominator_ * f.denominator_;
	return reduce(c);
}

Fraction Fraction::operator*(Fraction f)
{
	Fraction c;
	c.numerator_ = numerator_ * f.numerator_;
	c.denominator_ = denominator_ * f.denominator_;
	return reduce(c);
}

Fraction Fraction::operator/(Fraction f)
{
	Fraction c;
	c.numerator_ = numerator_ * f.denominator_;
	//Проверка на деление с отрицательными дробями
	if (f.numerator_ < 0) {
		c.denominator_ = denominator_ * f.numerator_ * -1;
		c.numerator_ *= -1;
	}
	else { c.denominator_ = denominator_ * f.numerator_; }
	return reduce(c);
}

Fraction& Fraction::operator++()
{
	//Проверка на нулевой числитель
	if (numerator_ == 0) {
		return *this;
	}
	if (numerator_ < 0) {
		numerator_ -= denominator_;
	}
	else {
		numerator_ += denominator_;
	}
	return *this;
}

Fraction Fraction::operator--()
{
	//Проверка на нулевой числитель
	if (numerator_ == 0) {
		return *this;
	}
	numerator_ -= denominator_;
	return *this;
}

Fraction Fraction::operator--(int)
{
	//Проверка на нулевой числитель
	if (numerator_ == 0) {
		return *this;
	}
	Fraction f = *this;
	--* this;
	return f;
}

std::ostream& operator<<(std::ostream& left, Fraction& f)
{
	if (f.numerator_ == 0) {
		left << 0;
	}
	else {
		left << f.numerator_ << "/" << f.denominator_;
	}
	return left;
}