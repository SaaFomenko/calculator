#include <iostream>
#include "define.h"


int main() {
	Calc calc;

	while(true)
	{
		initCalc(calc, nvar::num1);
		initCalc(calc, nvar::num2);
		outCalc(calc);
	}
 
  return 0;
}
