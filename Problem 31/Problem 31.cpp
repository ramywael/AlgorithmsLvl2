#include<iostream>
#include<cmath>
using namespace std;

int ReadPostiveNumber(string message) {
	int number = 0;
	do {
		cout << message << "\n";
		cin >> number;
	} while (number <=0);
	return number;
}

void FillArrayWith1ToN(int arr[100], int number) {
	for (int i = 0; i <number;i++)
	{
		arr[i] = i+1;
	}
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



 void ShuffleArray(int arr[100],int number) {
	for (int i = 0;i <number;i++) {
		Swap(arr[GenerateRandomNumber(1, number) - 1], arr[GenerateRandomNumber(1, number)-1]);
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
	for (int i = 0;i <number;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}


int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int number = ReadPostiveNumber("Please Enter a postive numbers of elements of array");
	FillArrayWith1ToN(arr, number);
	cout << "Before Shuffled \n";
	PrintElements(arr, number);
	ShuffleArray(arr, number);
	cout << "After Shuffled \n";
	PrintElements(arr, number);


}