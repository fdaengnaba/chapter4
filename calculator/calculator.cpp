// simple postfix calculator
#include <std_lib_facilities.h>

int to_digit(string input);

int main()
{
	string arg1;
	string arg2;
	char op;

	cout << "To use:\noperand operand operator\n";
	cout << "Example: 10 10 +\n";
	cout << "supported operator: +-*/\n";

	while (cin >> arg1 >> arg2 >> op)
	{
		int operand1 = to_digit(arg1);
		int operand2 = to_digit(arg2);
		if (operand1 == -1 || operand2 == -1)
		{
			cout << "input error\n";
			continue;
		}

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

int to_digit(string input)
{
	vector<string> digits = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	if (input.size() == 1)
	{
		if (input[0] >= '0' && input[0] <= '9')
			return int(input[0] - '0');
		else
			return -1;
	}
	else
	{
		for (int i = 0; i < 10; ++i)
		{
			if (input == digits[i])
			{
				return i;
			}
		}
		return -1;
	}
}