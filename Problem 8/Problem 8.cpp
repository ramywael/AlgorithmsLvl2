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

int ReadDigit(string message) {
	int number = 0;
	do {
		cout << message << '\n';
		cin >> number;
	} while (number < 0);
		return number;
}

int CalcFrequancy(int number,int digit) {
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

void PrintResult(int res,int digit) {
	cout << "Digit " << digit << " Frequancy is " << res << " Time(s)";
}



int main() {
	int number = ReadPostiveNumber("Please Enter Postive Number");
	int digit = ReadDigit("Please Enter The digit ");
	PrintResult(CalcFrequancy(number,digit),digit);
}