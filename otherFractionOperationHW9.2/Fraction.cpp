#include "Fraction.h"

Fraction Fraction::reduce(Fraction a)
{	
		//��� ����� ������ ������� �������� ���������� ������ ���������
		int num = abs(a.numerator_);
		int den = a.denominator_;

		//�������� �� �������, ����� ������� ����� �������
		if (num == 1 || num == 0) {
			return a;
		}

		//����� ������ �������� ������� �������� 
		while (num != den)
		{
			if (num < den) {
				den -= num;
			}
			else {
				num -= den;
			}
		}
		//���������� �� ��������
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
	//�������� �� ������� � �������������� �������
	if (f.numerator_ < 0) {
		c.denominator_ = denominator_ * f.numerator_ * -1;
		c.numerator_ *= -1;
	}
	else { c.denominator_ = denominator_ * f.numerator_; }
	return reduce(c);
}

Fraction& Fraction::operator++()
{
	//�������� �� ������� ���������
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
	//�������� �� ������� ���������
	if (numerator_ == 0) {
		return *this;
	}
	numerator_ -= denominator_;
	return *this;
}

Fraction Fraction::operator--(int)
{
	//�������� �� ������� ���������
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