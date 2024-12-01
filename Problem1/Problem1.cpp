#include<iostream>
using namespace std;

void Header() {
	cout << "\n \n";
	cout << "\t \t \t \t Multiplication table from 1 to 10 \n \n";
	cout << "\t \t";
	for (int i = 1;i <= 10;i++) {
		cout << i << "\t";
	}
	cout << "\n";
	cout << "-------------------------------------------------------------------------------------------\n";
}

int CalcMultiplication() {
	int res = 0;
	for (int i = 1;i <= 10;i++) {
		for (int j = 1;j <= 10;j++) {
			res = i * j;
			cout << res << "\n";
		}
		cout << "\t";
	}
	return res;
}

void Column() {

	for (int i = 1;i <=10;i++) {
		cout << i << "\t"<<"| \t";
		for (int j = 1;j <= 10;j++)
		{
			cout << i * j<<"\t";
		}
		cout << "\n";
	}
	
	}



void PrintResult(int res) {
	cout << res;
}

int main() {
	Header();
	Column();
	//PrintResult(CalcMultiplication());
}