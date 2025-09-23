// "bleeps" out determined words
#include <std_lib_facilities.h>

int main()
{
	vector<string> disliked = { "Brocoli", "debt"};
	vector<string> words;

	for (string temp; cin >> temp;)
	{
		bool illegal = false;
		for (string dislike : disliked)
		{
			if (temp == dislike)
			{
				illegal = true;
				break;
			}
				
		}

		if (illegal)
			words.push_back("BLEEP");
		else
			words.push_back(temp);

	}

	for (string temp : words)
		cout << temp << ' ';
	cout << '\n';
}