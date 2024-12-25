#include<iostream>
using namespace std;

int ReadPostiveNumber(string message) {
	int num = 0;
	do {
		cout << message << "\n";
		cin >> num;
	} while (num < 0);
	return num;
}
void PrintInvertedLetters(int number) {

	for (int i = 65 + number - 1;i >= 65;i--) {
		for (int j = 1;j <= number - (65 + number - 1 - i);j++) {
			cout << char(i);
		}
		cout << "\n";
	}

}




int main() {
	PrintInvertedLetters(ReadPostiveNumber("Please Enter Postive number"));
}