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
bool IsPerfectNumber(int number) {
	int sum = 0;
	for (int i = 1;i < number;i++) {
		if (number % i == 0)
			sum += i;
	}
	return number == sum;
}

void PrintResult(int number) {
	for (int i = 1;i <= number;i++) {
		if (IsPerfectNumber(i))
			cout << i<<"\n";
		
 }
}


int main() {
	int number = ReadPostiveNumber("Please Enter a Postive Number ?");
	PrintResult(number);
}