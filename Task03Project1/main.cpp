#include <iostream>
#define SIZE 100
using namespace std;

int main() {
	int marks[SIZE];

	int count;
	cout << "Input count of numbers: ";
	cin >> count;

	cout << "Input numbers: ";
	for (int i = 0; i < count; i++)
	{
		cin >> marks[i];
	}

	int max = marks[0];
	int min = marks[0];

	for (int i = 1; i < count; i++)
	{
		if (marks[i] > max) {
			max = marks[i];
		}
		if (marks[i] < min) {
			min = marks[i];
		}
	}

	return 0;
}