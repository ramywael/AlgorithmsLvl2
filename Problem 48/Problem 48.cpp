#include<iostream>
#include<cmath>
using namespace std;


float GetFractionNumber(float Number) {
	return Number - (int)Number;
}

float ReadNumber() {
	float Number = 0.0;
	cout << "Please Enter Your Floot Number \n";
	cin >> Number;
	return Number;
}

int MyFloor(float Number) {
	if (Number > 0)
		return (int)Number;
	else
	{
		if (GetFractionNumber(Number) == 0.0)
			return (int)Number;
		else
			return (int)--Number;
	}
		
}




int main() {
	float Number = ReadNumber();
	cout << "MyFloor Result : " << MyFloor(Number) << endl;
	cout << "C++ floor Result : " << floor(Number) << endl;

}