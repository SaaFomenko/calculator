#include "define.h"


bool Calc::set_num1(double num1)
{
	if (num1 == 0)
	{
		return false;
	}

	this->num1 = num1;

	return true;
}

bool Calc::set_num2(double num2)
{
	if (num2 == 0)
	{
		return false;
	}

	this->num2 = num2;

	return true;
}

double Calc::add(){
	return this->num1 + this->num2;
}

double Calc::multiply()
{
	return this->num1 * this->num2;
}

double Calc::subtract_1_2()
{
	return this->num1 - this->num2;
}

double Calc::subtract_2_1()
{
	return this->num2 - this->num1;
}

double Calc::divide_1_2()
{
	return this->num1 / this->num2;
}

double Calc::divide_2_1()
{
	return this->num2 / this->num1;
}
