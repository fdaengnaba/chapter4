// simple postfix calculator
#include <std_lib_facilities.h>

int main()
{
	double operand1;
	double operand2;
	char op;

	cout << "To use:\noperand operand operator\n";
	cout << "Example: 10 10 +\n";
	cout << "supported operator: +-*/\n";

	while (cin >> operand1 >> operand2 >> op)
	{
		switch (op)
		{
		case '+':
			cout << operand1 + operand2 << '\n';
			break;
		case '-':
			cout << operand1 - operand2 << '\n';
			break;
		case '*':
			cout << operand1 * operand2 << '\n';
			break;
		case '/':
			cout << operand1 / operand2 << '\n';
			break;
		default:
			cout << "Error\n";
			break;
		}
	}
}