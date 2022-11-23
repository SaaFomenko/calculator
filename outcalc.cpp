#include <iostream>
#include "define.h"

const char* lable::add = {"num1 + num2 = "};
const char* lable::multiply = {"num1 * num2 = "};
const char* lable::subtract_1_2 = {"num1 - num2 = "};
const char* lable::subtract_2_1 = {"num2 - num1 = "};
const char* lable::divide_1_2 = {"num1 / num2 = "};
const char* lable::divide_2_1 = {"num2 / num1 = "};


void outCalc(Calc& calc)
{
	std::cout <<	lable::add << calc.add() << std::endl;
	std::cout <<	lable::subtract_1_2 << calc.subtract_1_2() << std::endl;
	std::cout <<	lable::subtract_2_1 << calc.subtract_2_1() << std::endl;
	std::cout <<	lable::multiply << calc.multiply() << std::endl;
	std::cout <<	lable::divide_1_2 << calc.divide_1_2() << std::endl;
	std::cout <<	lable::divide_2_1 << calc.divide_2_1() << std::endl;
}
