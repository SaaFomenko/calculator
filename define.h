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
  static const char* num1;
	static const char* num2;
	static const char* add;
	static const char* multiply;
	static const char* subtract_1_2;
	static const char* subtract_2_1;
	static const char* divide_1_2;
	static const char* divide_2_1;
};

enum nvar
{
	num1,
	num2
};

void initCalc(Calc& calc, nvar num_id);
void outCalc(Calc& calc);
