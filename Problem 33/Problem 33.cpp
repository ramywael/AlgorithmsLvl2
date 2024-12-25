#include<iostream>
using namespace std;


int ReadPostiveNumber() {
	int number = 0;
	do {
		cout << "Please Enter A Postive Number " << "\n";
		cin >> number;
	} while (number < 0);
	return number;
}

enum enRandomCharacter {
	SmallLetter,
	CapitalLetter,
	SpecialCharacter,
	Digit,
};


int GenerateRandomNumber(int from, int to) {
	int randNumber = rand() % (to - from + 1) + from;
	return randNumber;
}

char GetRandomCharacter(enRandomCharacter type) {
	switch (type)
	{
	case enRandomCharacter::SmallLetter:
		return char(GenerateRandomNumber(97, 122));
		break;
	case enRandomCharacter::CapitalLetter:
		return char(GenerateRandomNumber(65, 90));
		break;
	case enRandomCharacter::SpecialCharacter:
		return char(GenerateRandomNumber(33, 47));
		break;
	case enRandomCharacter::Digit:
		return char(GenerateRandomNumber(48, 57));
		break;
	default:
		break;
	}
}

string GenerateWord(enRandomCharacter type, short length) {
	string word;
	for (int i = 1;i <= length;i++) {
		word += GetRandomCharacter(type);
	}
	return word;
}

string GenerateKeys() {
	string key = "";
	key += GenerateWord(enRandomCharacter::CapitalLetter, 4) + "-";
	key += GenerateWord(enRandomCharacter::CapitalLetter, 4) + "-";
	key += GenerateWord(enRandomCharacter::CapitalLetter, 4) + "-";
	key += GenerateWord(enRandomCharacter::CapitalLetter, 4);

	return key;

}

void FillArrayWithKeys(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = GenerateKeys();
}

void PrintALLKeys(int number,string arr[100]) {
	cout << "Array Elements \n\n";
	for (int i = 0; i < number;i++) {
		cout << "Array [" << i << "] :";
		cout << GenerateKeys() << "\n";
	}
}
int main() {
	srand((unsigned)time(NULL));
	string arr[100];
	int number = ReadPostiveNumber();
	FillArrayWithKeys(arr, number);
	PrintALLKeys(number,arr);
}