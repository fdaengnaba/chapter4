#include <std_lib_facilities.h>

int main() {
	constexpr double dollar_per_yen = 0.0068;
	constexpr double dollar_per_euro = 1.18;
	constexpr double dollar_per_pound = 1.35;
	constexpr double dollar_per_yuan = 0.14;
	constexpr double dollar_per_kroner = 0.16;

	double value = 0;
	char currency = ' ';

	cout << "Please enter currency (y=yen, e=euro, p=pound sterling, r=renminbi yuan, k=kroner) followed by the value:\n";
	while (cin >> currency >> value)
	{
		switch (currency)
		{
		case 'y':
			cout << "$ " << value * dollar_per_yen << '\n';
			break;
		case 'e':
			cout << "$ " << value * dollar_per_euro << '\n';
			break;
		case 'p':
			cout << "$ " << value * dollar_per_pound << '\n';
			break;
		case 'r':
			cout << "$ " << value * dollar_per_yuan << '\n';
			break;
		case 'k':
			cout << "$ " << value * dollar_per_kroner << '\n';
			break;
		default:
			cout << "Currency not known\n";
			break;
		}
	}
}