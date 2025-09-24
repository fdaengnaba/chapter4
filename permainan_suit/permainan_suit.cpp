#include <std_lib_facilities.h>

int main()
{
	vector<char> move = { 'r', 'r', 's', 'p', 's', 'p' };

	for (char turn : move)
	{
		switch (turn)
		{
		case 'r':
			cout << "Rock" << '\n';
			break;
		case 's':
			cout << "Scissor" << '\n';
			break;
		case 'p':
			cout << "Paper" << '\n';
			break;
		default :
			cout << "move not define\n";
			break;
		}
		char temp;
		cin >> temp;
	}
	return 0;
}