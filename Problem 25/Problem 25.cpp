#include<iostream>
#include<cmath>
using namespace std;

int ReadPostiveNumber(string message) {
	int number = 0;
	do {
		cout << message << "\n";
		cin >> number;
	} while (number < 0);
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


int MinElementInArray(int arr[100], int number) {
	int min = arr[0];
	for (int i = 0;i < number;i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}



void PrintElements(int arr[100], int number) {
	cout << "Array Elements are :";
	for (int i = 0;i < number;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	cout << "Min Number is : " << MinElementInArray(arr, number);
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int number = ReadPostiveNumber("Please Enter a Postive Number of number of elements ");
	EnterElements(arr, number);
	PrintElements(arr, number);
}