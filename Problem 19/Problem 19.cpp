#include<iostream>
#include<cstdlib>
using namespace std;
int GenerateRandomNumber(int from,int to) {
	int randomNumber = rand() % (to - from + 1) + from;
	return randomNumber;
}

int main() {

	srand((unsigned)time(NULL));
	int num1 = GenerateRandomNumber(1,10);
	int num2 = GenerateRandomNumber(1, 10);
	int num3 = GenerateRandomNumber(1, 10);

	cout << num1 << "\n";
	cout << num2 << "\n";
	cout << num3 << "\n";

}