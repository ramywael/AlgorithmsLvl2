#include<iostream>
#include<cmath>
using namespace std;

int ReadPostiveNumber(string message) {
	int number = 0;
	do {
		cout << message << "\n";
		cin >> number;
	} while (number <= 0);
	return number;
}


int GenerateRandomNumber(int from, int to) {
	int randNumber = rand() % (to - from + 1) + from;
	return randNumber;
}

void EnterElements(int arr[100], int number) {
	for (int i = 0; i < number;i++)
	{
		arr[i] = GenerateRandomNumber(1, 100);
	}
}
void PrintElements(int arr[100], int number) {
	cout << "Array Elements are :";
	for (int i = 0;i < number;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}
short NumberOfOddNumber(int arr[100], int length) {
	short count = 0;
	for (int i = 0;i < length;i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	return count;
}

void PrintCountNumber(short counter, int length, int arr[100]) {
	for (int i = 0;i < length;i++) {
		cout << arr[i] << " ";
	}

	cout << "\nEven Numbers count is " << counter << '\n';
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int length = 0;
	length = ReadPostiveNumber("Please Enter The Number OF Elements");
	EnterElements(arr, length);
	PrintCountNumber(NumberOfOddNumber(arr, length), length, arr);
}