#include<iostream>
#include<cmath>
using namespace std;


float GetFractionNumber(float Number) {
	return Number - (int)Number;
}

float ReadNumber() {
	float Number = 0.0;
	cout << "Please Enter Your Float Number \n";
	cin >> Number;
	return Number;
}

int MyCeil(float Number) {
	if (Number > 0)
	{
		if (GetFractionNumber(Number) == 0.0)
			return (int)Number;
		else
			return (int)++Number;
	}
	else
		return (int)Number;

}




int main() {
	float Number = ReadNumber();
	cout << "MyCeil Result : " << MyCeil(Number) << endl;
	cout << "C++ floor Result : " << ceil(Number) << endl;

}