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
void PrintLetters(int number) {

	for ( int i = 65 ;i <=65+number-1 ;i++ ) {
		for (int j = 1;j <= i-65+1;j++) {
			cout << char(i);
		}
		cout << "\n";
	}

}




int main() {
	PrintLetters(ReadPostiveNumber("Please Enter Postive number"));
}