#include<iostream>
#include<string>
using namespace std;

string ReadNumber(string message) {
	string number;
	cout << message;
	cin >> number;
	return number;
}

void PrintResult(string number) {
	for (int i = number.length();i >=0 ;i--) {
		cout << number[i] << "\n";
	}
}



int main()
{
	PrintResult(ReadNumber("Please Enter The Number \n"));
}