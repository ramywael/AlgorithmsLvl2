#include<iostream>
#include<cmath>
using namespace std;
enum enRandomCharacter {
	SmallLetter,
	CapitalLetter,
	SpecialCharacter,
	Digit,
};

//enRandomCharacter CheckAllRandom(enRandomCharacter choice) {
//	if (choice == enRandomCharacter::SmallLetter) {
//		return enRandomCharacter::SmallLetter;
//	}
//	else if (choice == enRandomCharacter::CapitalLetter) {
//		return  enRandomCharacter::CapitalLetter;
//	}
//	else if (choice == enRandomCharacter::SpecialCharacter) {
//		return enRandomCharacter::SpecialCharacter;
//	}
//	else {
//		return enRandomCharacter::Digit;
//	}
//}

int GenerateRandomNumber(int from, int to) {
	int randNumber = rand() % (to - from + 1) + from;
	return randNumber;
}

char PrintResult(enRandomCharacter type) {
	switch (type)
	{
	case enRandomCharacter::SmallLetter:
		return char(GenerateRandomNumber(97,122));
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
int main() {
	srand((unsigned)time(NULL));
	cout << PrintResult(enRandomCharacter::SmallLetter) << "\n";
	cout << PrintResult(enRandomCharacter::CapitalLetter) << "\n";
	cout << PrintResult(enRandomCharacter::SpecialCharacter) << "\n";
	cout << PrintResult(enRandomCharacter::Digit) << "\n";

}