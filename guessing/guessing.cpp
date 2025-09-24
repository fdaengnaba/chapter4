#include <std_lib_facilities.h>

int main()
{
	cout << "Think a number between 1 and 100 inclusive";
	
	int smallest = 1;
	int largest = 100;

	while (smallest != largest)
	{
		int guess = (smallest + largest) / 2;
		cout << "guess: " << guess << "\n< or > or c(correct)?";
		char answer;
		cin >> answer;

		if (answer == '<')
		{
			largest = guess;
		}
		else if (answer == '>')
		{
			smallest = guess;
		}
		else if (answer == 'c')
		{
			break;
		}
	}
}