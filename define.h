class Calc
{
	private:
		double num1;
		double num2;
	public:
		bool set_num1(double num1);
		bool set_num2(double num2);
		double add();
		double multiply();
		double subtract_1_2();
		double subtract_2_1();
		double divide_1_2();
		double divide_2_1();
};

struct lable
{
  const char* num1 = { "num1: " };
	const char* num2 = { "num2: " };
};

void calcInit(Calc* calc, const char* num);
