#include <std_lib_facilities.h>

int main() {
	
	for (int i = 0; i < 26; ++i)
	{
		char lower_case = char('a' + i);
		char upper_case = char('A' + i);
		cout << lower_case << '\t' << int(lower_case) << "\t|\t" << upper_case << '\t' << int(upper_case) << '\n';
	}
}