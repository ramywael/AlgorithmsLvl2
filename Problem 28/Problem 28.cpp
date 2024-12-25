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
void CopyArray(int arr[100],int arr1[100],int number) {
	for (int i = 0;i < number;i++) {
		arr1[i] = arr[i];
	}
}

void PrintElements(int arr[100], int number) {
	cout << "Array Elements are :";
	for (int i = 0;i < number;i++) {
		cout << arr[i] << " ";
	}
}


int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int arr1[100];
	int number = ReadPostiveNumber("Please Enter a Postive Number of number of elements ");
	EnterElements(arr, number);
	PrintElements(arr, number);
	CopyArray(arr, arr1,number);
	cout << "\n ";
	PrintElements(arr1, number);

}