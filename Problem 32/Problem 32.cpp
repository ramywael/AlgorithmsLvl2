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

void Swap(int& a, int& b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

int GenerateRandomNumber(int from, int to) {
	int randNumber = rand() % (to - from + 1) + from;
	return randNumber;
}
void FillArrayWith1ToN(int arr[100], int number) {
	for (int i = 0; i < number;i++)
	{
		arr[i] = GenerateRandomNumber(1, 100);
	}
}


void ShuffleArray(int arr[100], int number) {
	for (int i = 0;i <number / 2;i++) {
		Swap(arr[i], arr[number-i-1]);
	}
}

void ReverseArray(int arr[100], int number,int reversedArr[100]) {
	for (int i = 0;i < number ;i++) {
		reversedArr[i] = arr[number - i - 1];
	}
}

//void SumOfBothArray(int arr[100], int arr1[100], int number, int arr3[100], int& length2) {
//	int sum = 0;
//	int count = 0;
//	cout << "Sum of array elemnts 1 and 2 " << "\n";
//	for (int i = 0;i < number;i++) {
//		sum = arr[i] + arr1[i];
//		arr3[i] = sum;
//		count++;
//	}
//}

void PrintElements(int arr[100], int number) {

	cout << "Array Elements are : ";
	for (int i = 0;i < number ;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}


int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int arr2[100];
	int number = ReadPostiveNumber("Please Enter a postive numbers of elements of array");
	FillArrayWith1ToN(arr, number);
	cout << "Before Reversing \n";
	PrintElements(arr, number);
	ReverseArray(arr, number,arr2);
	cout << "After Reversing \n";
	PrintElements(arr2, number);


}