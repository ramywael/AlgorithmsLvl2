#include<iostream>
#include<cmath>
using namespace std;
enum enPrimeOrNot {
	Prime=1,
	NotPrime=2,
};

enPrimeOrNot CheckPrime(int number) {
	int m = number / 2;
	for (int i = 2;i <= m;i++) {
		if (number % i == 0) {
			return enPrimeOrNot::NotPrime;
		}
	}
	return enPrimeOrNot::Prime;
}

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
void CopyArray(int arr[100], int arr1[100], int number,int& lengthCopyArr) {
	int count = 0;
	for (int i = 0;i < number;i++) {
		if (CheckPrime(arr[i]) == enPrimeOrNot::Prime) {
			arr1[count] = arr[i];
			count++;
		}
	}
	lengthCopyArr = --count; //we did that because in the last iteration it will add one more and exit the loop so we get the original number of primenumbers
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
	int length2 = 0;
	int number = ReadPostiveNumber("Please Enter a Postive Number of number of elements ");
	EnterElements(arr, number);
	PrintElements(arr, number);
	CopyArray(arr, arr1, number,length2);
	cout << "\n ";
	PrintElements(arr1, length2);

}