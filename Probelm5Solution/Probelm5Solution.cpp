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

void PrintResult(int number) {
	int remainder = 0;
	while (number >0) {
		remainder = number % 10; //To Get The Last Digit From The Number So we divided by 10
		number = number / 10; //to get the last digit from the reminded number 
		cout << remainder << "\n";
	}
}





int main() {
	PrintResult(ReadPostiveNumber("Please Enter Postive Number ?"));

}