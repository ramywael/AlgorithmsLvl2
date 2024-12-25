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
void PrintInvertedNumbers(int number) {

	for (int i = number;i > 0;i--) {
		for (int j = 0;j < i;j++) {
			cout << i;
		}
		cout << "\n";
	}

}




int main() {
	PrintInvertedNumbers(ReadPostiveNumber("Please Enter Postive number"));
}