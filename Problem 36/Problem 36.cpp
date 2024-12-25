#include<iostream>
using namespace std;


enum enTrueOrFalse {
	Flase=0,
	True =1,
};
int ReadPostiveNumber(string mssg) {
	int number = 0;
	do {
		cout << mssg << "\n";
		cin >> number;
	} while (number <= 0);
	return number;
}

//int GenerateRandomNumber(int from, int to) {
//	int randNumber = rand() % (to - from + 1) + from;
//	return randNumber;
//}


enTrueOrFalse DetemineTrueOrFalse(short value) {
	switch (value)
	{
	case 0 :
		return enTrueOrFalse::Flase;
		break;
	case 1:
		return enTrueOrFalse::True;
		break;
	default:
		break;
	}
}

short ResultOfDetemination(enTrueOrFalse type) {
	switch (type)
	{
	case enTrueOrFalse::Flase:
		return (short)type;
		break;
	case enTrueOrFalse::True:
		return (short)type;
		break;
	default:
		return - 1;
		break;
	}
}

short FillArrayWith1ToN(int arr[100]) {
	short true_or_false;
	short result;
	short counter = 0;
	do {
		int number = ReadPostiveNumber("Please Enter A Number");
		cout << "Do You Want To Add More Numbers ? [0]:No,[1]:Yes?";
		cin >> true_or_false;
		 result = ResultOfDetemination(DetemineTrueOrFalse(true_or_false));
		 arr[counter] = number;
		 counter++;
	} while (result != 0 || counter > 100);
	return counter;
}

//bool SearchSpecificNumber(int specificNumber, int arr[100], int length) {
//	bool isFound = false;
//	cout << "The Number you are looking for is:" << specificNumber << "\n";
//	for (int i = 0;i < length; i++) {
//		if (specificNumber == arr[i]) {
//			cout << "The Number Found at position : " << i << "\n";
//			cout << "The Number Found its order :" << i + 1 << "\n";
//			isFound = true;
//			return isFound;
//			break;
//		}
//	}
//	cout << "The Number isnot Found :-(";
//	return isFound;
//}

//short FindNumberPositionInArray(int arr[100], int arrLength, int number) {
//	for (int i = 0;i < arrLength;i++) {
//		if (arr[i] == number) {
//			return i;
//		}
//	}
//	return -1;
//}

//string IsFoundOrNot(short number) {
//	if (number != -1) {
//		return "The Number is Found :-)";
//	}
//	else {
//		return "The Number isnot Found :-(";
//	}
//}

//bool IsNumberInArray(int arr[100], int arrlength, int number) {
//	return FindNumberPositionInArray(arr, arrlength, number) != -1;
//}



void AddArrayElement(int number,int arr[100], int& length) {
	length++;
	arr[length - 1] = number;
}


void InputUserNumbersInArray(int arr[100],int &length) {
	bool AddMore = true;
	do {
		AddArrayElement(ReadPostiveNumber("Please Enter The Number"), arr, length);
		cout << "Do You Want To Add More Numbers ? [0]:No,[1]:Yes?";
		cin >> AddMore;
	} while (AddMore);
}




void PrintElements(int arr[100], int arr_lenght) {
	cout << "Array Length "<<arr_lenght<<'\n';
	cout << "Array Elements are : ";
	for (int i = 0;i < arr_lenght;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}


int main() {
	int arr[100],length=0;

	InputUserNumbersInArray(arr, length);

	PrintElements(arr, length);

	/*short NumberOfArray = FillArrayWith1ToN(arr);
	/*int specificNumber = ReadPostiveNumber("Please Enter A Number To Search For");
	SearchSpecificNumber(specificNumber, arr, lengthNumber);*/
}