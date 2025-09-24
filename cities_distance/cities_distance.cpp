#include <std_lib_facilities.h>

int main() {
	vector<double> distances;
	double sum = 0;
	
	for (double read; cin >> read;)
	{
		distances.push_back(read);
		sum += read;
	}

	sort(distances);
	double smallest = distances[0];
	double largest = distances[distances.size() - 1];
	double mean = sum / distances.size();

	cout << "The smallest distanc between city is: " << smallest << '\n';
	cout << "The largest distance between city is: " << largest << '\n';
	cout << "The mean is: " << mean << '\n';
}