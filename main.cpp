#include <iostream>

using namespace std;

int main() {

	int c;

	int num, x = 1, sum = 0;

	cout << "Enter how many iteration do you want: ";
	cin >> num;

	while (num >= x) {
		cout << "Enter number " << x << ": ";
		cin >> c;

		sum += c;
		x++;
	}

	double avg = sum / (double)num;
	cout << "The total is " << sum << " and the average is "
		<< avg << endl;


	cin >> c; // to not close the window

	return 0;
}