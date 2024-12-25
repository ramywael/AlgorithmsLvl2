#include<iostream>

using namespace std;

int ReadPostiveNumber(string message) {
	int num = 0;
	do {
		cout << message << "\n";
		cin >> num;
	} while (num < 0);
	return num;
}

int ReverseNumber(int number) {
	int reminder = 0;
	int newNumber = 0;
	while (number > 0) {
		reminder = number % 10;
		number = number / 10;
		newNumber = newNumber * 10 + reminder;
	}
	return newNumber;
}

void PrintNumber(int num) {
	int reminder = 0;
	while (num > 0) {
		reminder = num % 10;
		num = num / 10;
		cout << reminder << "\n";
	}

}

int main() {
	PrintNumber(ReverseNumber(ReadPostiveNumber("Please Enter a Postive number")));
}