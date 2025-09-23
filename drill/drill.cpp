#include <std_lib_facilities.h>

int main()
{
	double a;
	double b;
	while (cin >> a >> b)
	{
		if (a == b)
		{
			cout << "The numbers are equal\n";
		}
		else
		{
			double small = min(a, b);
			double large = max(a, b);
			cout << "the smaller value is: " << small << '\n';
			cout << "the larger value is: " << large << '\n';
			if (large - small < 1.0 / 100)
			{
				cout << "the numbers are almost equal\n";
			}
		}
	}
}