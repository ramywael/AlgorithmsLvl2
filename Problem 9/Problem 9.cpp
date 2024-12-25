#include<iostream>
using namespace std;

int ReadPostiveNumber(string message) {
	int number = 0;
	do {
		cout << message << "\n";
		cin >> number;
	} while (number < 0);
	return number;
}
int CalcFrequancy(int number,short digit) {
	int reminder = 0;
	int counter = 0;

	while (number > 0) {
		reminder = number % 10;
		number = number / 10;
		if (digit == reminder) {
			counter++;
		}
	}
	return counter;
}

void CheckFrequancy(int number) {
	short DigitFrequency = 0;
	for (int i = 0;i < 10;i++) {
		DigitFrequency=CalcFrequancy(number,i);
		if (DigitFrequency > 0) {
			cout << "Digit " << i << " Frequancy is " << DigitFrequency << " Time(s) \n";
		}
	}
}



int main() {
	int number = ReadPostiveNumber("Please Enter Postive Number");
	CheckFrequancy(number);
}