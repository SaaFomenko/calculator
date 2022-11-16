class Calculator
{
	private:
		double num1;
		double num2;
	public:
		Calculator();
		bool set_num1(double num1);
		bool set_num2(double num2);
		double add(double num1, double num2);
		double multiply(double num1, double num2);
		double subtract_1_2(double num1, double num2);
		double subtract_2_1(double num1, double num2);
		double divide_1_2(double num1, double num2);
		double divide_2_1(double num1, double num2);
};
