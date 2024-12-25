#include<iostream>
#include<cmath>
using namespace std;

int ReadNumber() {
	int number = 0;
	cout << "Please Enter The Number \n";
	cin >> number;
	return number;

}

float MyABS(float Number)
{
	if (Number > 0)
		return Number;
	else
		return Number * -1;
}

int main() {
	int number = ReadNumber();
	cout<<"MyABS RESULT : " << MyABS(number);
	cout << "\nC++ abs result : " << abs(number)<<"\n";
}