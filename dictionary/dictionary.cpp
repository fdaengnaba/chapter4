// simple dictionary: list of sorted words
#include <std_lib_facilities.h>

int main()
{
	vector<string> words;
	for (string temp; cin >> temp;)
		words.push_back(temp);
	cout << "Number of words: " << words.size() << '\n';
	sort(words);

	// is this a new word
	for (int i = 0; i < words.size(); ++i)
		if (i == 0 || words[i - 1] != words[i])
			cout << words[i] << '\n';
}