#include <std_lib_facilities.h>

int main()
{
	vector<string> numbers = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	for (int reading; cin >> reading;)
	{
		if (reading >= 0 && reading < 10)
		{
			cout << numbers[reading] << '\n';
		}
		else
		{
			cout << "not a single digit\n";
		}
	}
}