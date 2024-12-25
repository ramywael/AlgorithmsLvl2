#include<iostream>
#include<cmath>
using namespace std;

float ReadNumber() {
	float number = 0;
	cout << "Please Enter The Number \n";
	cin >> number;
	return number;

}

int MyRound(float Number)
{
	int convertedNumber = Number;
	float reminder = 0.0;
	reminder = Number - convertedNumber;
	if (Number < 0) {
		if (reminder <= -0.5) {
			--convertedNumber;
		}
	}

	if (reminder >= 0.5) {
		++convertedNumber;
	}
	return convertedNumber;
}

int main() {
	float number = ReadNumber();
	cout<<"My Round Result : "<< MyRound(number);
	cout << "\nC++ Round Result : " << round(number);
}