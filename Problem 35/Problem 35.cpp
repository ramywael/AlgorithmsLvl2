#include<iostream>
using namespace std;

int ReadPostiveNumber(string mssg) {
	int number = 0;
	do {
		cout << mssg << "\n";
		cin >> number;
	} while (number <= 0);
	return number;
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

bool SearchSpecificNumber(int specificNumber, int arr[100], int length) {
	bool isFound = false;
	cout << "The Number you are looking for is:" << specificNumber << "\n";
	for (int i = 0;i < length; i++) {
		if (specificNumber == arr[i]) {
			cout << "The Number Found at position : " << i << "\n";
			cout << "The Number Found its order :" << i + 1 << "\n";
			isFound = true;
			return isFound;
			break;
		}
	}
	cout << "The Number isnot Found :-(";
	return isFound;
}

short FindNumberPositionInArray(int arr[100], int arrLength, int number) {
	for (int i = 0;i < arrLength;i++) {
		if (arr[i] == number) {
			return i;
		}
	}
	return -1;
}

string IsFoundOrNot(short number) {
	if (number != -1) {
		return "The Number is Found :-)";
	}
	else {
		return "The Number isnot Found :-(";
	}
}

bool IsNumberInArray(int arr[100], int arrlength, int number) {
	return FindNumberPositionInArray(arr, arrlength, number) != -1;
}

void PrintElements(int arr[100], int number) {

	cout << "Array Elements are : ";
	for (int i = 0;i < number;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}


int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int lengthNumber = ReadPostiveNumber("Please Enter The Number OF elements");
	FillArrayWith1ToN(arr, lengthNumber);
	PrintElements(arr, lengthNumber);
	short searchedNumber = ReadPostiveNumber("Please Enter The Number that You want to search");

	/*string status = IsFoundOrNot(FindNumberPositionInArray(arr, lengthNumber, searchedNumber));
	cout << status << "\n";*/

	if (!(IsNumberInArray(arr,lengthNumber,searchedNumber))) {
		cout << "No,The Number is not Found :-(";
	}
	else {
		cout << "Yes,The Number is Found :-)";

	}






	/*int specificNumber = ReadPostiveNumber("Please Enter A Number To Search For");
	SearchSpecificNumber(specificNumber, arr, lengthNumber);*/
}