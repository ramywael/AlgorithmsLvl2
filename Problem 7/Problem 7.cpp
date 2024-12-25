#include<iostream>
using namespace std;

int ReadPostiveNumber(string message) {
	int num = 0; 
	do{
		cout << message <<"\n";
		cin >> num;
	}while (num < 0);
	return num;
}

void ReverseNumber(int number) {
	int reminder = 0;
	int newNumber = 0;
	while (number > 0) {
		reminder = number % 10;
		number = number / 10;
		newNumber = newNumber * 10 + reminder;	
	}
	cout << newNumber;
}



int main() {
	int number = (ReadPostiveNumber("Please Enter Postive Number"));
	ReverseNumber(number);
}