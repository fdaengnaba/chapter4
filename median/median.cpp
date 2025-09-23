#include <std_lib_facilities.h>

int main()
{
	vector<double> temps;

	for (double temp; cin >> temp;)
	{
		temps.push_back(temp);
	}

	sort(temps);

	for (double temp : temps)
	{
		cout << temp << '\n';
	}

	double median = double(temps[floor(temps.size() / 2.0)-1] + temps[ceil(temps.size() / 2.0)-1]) / 2.0;
	cout << "Median: " << median << '\n';

	return 0;
}