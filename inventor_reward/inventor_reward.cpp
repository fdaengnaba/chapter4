#include <std_lib_facilities.h>

int main()
{
	long long unsigned int sum = 0;
	long long unsigned int square = 0;
	bool thousend = false;
	bool million = false;
	bool trillion = false;

	for (int i = 0; i < 64; ++i)
	{
		if (square == 0)
			square = 1;
		else
			square *= 2;
		sum += square;
		cout << i + 1<< ". square: " << square << "\tsum: " << sum << '\n';

		if (!thousend && sum > 1000)
		{
			cout << "for at least 1.000 grain, need " << i + 1 << " square\n";
			thousend = true;
		}
		if (!million && sum > 1000000)
		{
			cout << "for at least 1.000.000 grain, need " << i + 1 << " square\n";
			million = true;
		}
		if (!trillion && sum > 1000000000)
		{
			cout << "for at least 1.000.000.000 grain, need " << i + 1 << " square\n";
			trillion = true;
		}
	}
}