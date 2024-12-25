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

void SumOfBothArray(int arr[100], int arr1[100],int number,int arr3[100],int& length2) {
	int sum = 0;
	int count = 0;
	cout << "Sum of array elemnts 1 and 2 " << "\n";
	for (int i = 0;i < number;i++) {
		sum = arr[i] + arr1[i];
		arr3[i] = sum;
		count++;
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
	int arr2[100];
	int lengthThird = 0;
	int number = ReadPostiveNumber("Please Enter a Postive Number of number of elements ");
	EnterElements(arr, number);
	PrintElements(arr, number);
	cout << "\n ";
	EnterElements(arr1, number);
	PrintElements(arr1, number);
	cout << "\n";
	SumOfBothArray(arr,arr1,number,arr2,lengthThird);
	PrintElements(arr2,number);
}