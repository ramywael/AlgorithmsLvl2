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
bool isPalindrome(int reverse,int number) {

	return (reverse == number);
}


void PrintNumber(bool isPalindrome) {
	if (isPalindrome)
		cout << "Yes, it is a Palindrome number \n";
	else
		cout << "No, it isnot a Palindrome number \n";

}

int main() {
	int num = ReadPostiveNumber("Please Enter A Postive Number ");
	int num1 = ReadPostiveNumber("Please Enter A Postive Number ");
	PrintNumber(isPalindrome(ReverseNumber(num),num));
	PrintNumber(isPalindrome(ReverseNumber(num1), num1));

}