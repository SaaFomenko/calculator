#include <iostream>
#include "define.h"

const char* lable::num1 = { "num1: " };
const char* lable::num2 = { "num2: " };

void initCalc(Calc* calc, nvar num_id)
{
	std::string in_user = "";
	double num = 0;

	const std::string enter_lable = "Введите ";
	const std::string fail_enter = "Неверный ввод!";
	const char* num_lable = nvar::num1 == num_id ? lable::num1 : lable::num2;
	bool check = false;

	do {
		std::cout << enter_lable << num_lable;
		std::cin >> in_user;

		try
		{
			num = std::stod(in_user);

			if (nvar::num1 == num_id)
			{
				check = calc->set_num1(num);
			} 
			else
			{
				check = calc->set_num2(num);
			}
		}
		catch (std::invalid_argument e)
		{
			check = false;
		}
	
		if (!check)
		{
			std::cout << fail_enter << std::endl;
		}

	} while (!check);
}
