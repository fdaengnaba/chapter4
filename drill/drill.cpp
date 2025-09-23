#include <std_lib_facilities.h>

int main()
{
	double a;
	string unit;
	double largest;
	double smallest;

	cin >> a;
	cin >> unit;
	largest = a;
	smallest = a;
	cout << a << '\n';

	while (cin >> a)
	{
		cout << a;
		if (a > largest)
		{
			largest = a;
			cout << " the largest so far.\n";
		}
		else if (a < smallest)
		{
			smallest = a;
			cout << " the smallest so far.\n";
		}
		else
			cout << "\n";
	}
}