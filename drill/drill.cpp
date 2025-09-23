#include <std_lib_facilities.h>

int main()
{
	int a;
	int b;
	while (cin >> a >> b)
	{
		int small = min(a, b);
		int large = max(a, b);
		cout << "the smaller value is: " << small << '\n';
		cout << "the larger value is: " << large << '\n';
	}
}