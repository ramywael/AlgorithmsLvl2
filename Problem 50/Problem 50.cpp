#include<iostream>
using namespace std;

float ReadNumber() {
	float Number = 0.0;
	cout << "Please Enter Your Float Number \n";
	cin >> Number;
	return Number;
}

double MySqrt(float Number) {
	return pow(Number, 0.5);
}

int main() {
	float Number = ReadNumber();
	cout << "My MySqrt Result : " << MySqrt(Number) << endl;
	cout << "C++ sqrt Result: " << sqrt(Number) << endl;

}