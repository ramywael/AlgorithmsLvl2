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
void AddArrayElement(int number, int arr[100], int &length) {
	length++;
	arr[length - 1] = number;
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
void CopyArray(int arr[100], int arr1[100], int number,int& arr1_len) {
	for (int i = 0;i < number;i++) {
		AddArrayElement(arr[i], arr1, arr1_len);
	}
}

void PrintElements(int arr[100], int number) {
	cout << "Array Elements are :";
	for (int i = 0;i < number;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}


int main() {
	srand((unsigned)time(NULL));
	int arr[100], arr2[100];
	int arr2_len = 0;
	int number = ReadPostiveNumber("Please Enter a Postive Number of number of elements ");
	EnterElements(arr, number);
	cout << "\nArray 1 elements:\n";
	PrintElements(arr, number);
	CopyArray(arr, arr2, number,arr2_len);
	
	cout << "\nArray 2 elements after copy:\n";

	PrintElements(arr2, arr2_len);

}