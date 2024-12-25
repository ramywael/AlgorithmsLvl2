#include<iostream>
using namespace std;


int ReadNumber() {
	int num = 0;

	do{
		cout << "Please Enter A Postive Number \n";
		cin >> num;
	} while (num < 0);
	return num;

}

int SumDigits(int number) {
	int sum = 0;
	int remainder = 0;
	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		sum += remainder;
	}
	return sum;;

}

void PrintResult(int res) {
	cout << "The result is " << res << "\n";
}


int main() {
	PrintResult(SumDigits(ReadNumber()));
}