#include <iostream>
#include "define.h"

void calcInit(Calc* calc, char* num)
{
	double num = 0;


	const std::string enter_lable = "Введите ";
	const std::string fail_enter = "Неверный ввод!";

	do {
		
		std::cout << enter_lable << num_lable;
		std::cin >> *num;

		bool check = calc.set_num1(num1);
		if (!check)
		{
			ctd::cout << fail_enter << std::endl;
		}

	} while (!check);

}
