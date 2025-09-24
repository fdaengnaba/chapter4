#include <std_lib_facilities.h>

int main()
{
	vector<string> numbers = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	for (string read; cin >> read;)
	{
		bool found = false;
		for (int i = 0; i < 10; ++i)
		{
			if (read == numbers[i])
			{
				found = true;
				cout << i << '\n';
				break;
			}
		}
		if (!found)
			cout << "no matching digit\n";
	}
}