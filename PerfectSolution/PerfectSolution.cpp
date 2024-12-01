#include<iostream>
using namespace std;

void PrintHeader() {
	cout << "\n\n\t\t\t Multipliaction Table From 1 to 10 \n \n";
	cout << "\t";
	for (int i = 1;i <= 10;i++) {
		cout << i << "\t";
	}
	cout << "\n --------------------------------------------------------------------------------------\n";
}


string ColumnSeprator(int i) {
	if (i < 10)
		return "   |";
	else
		return "  |";
}

void PrintTable() {
	PrintHeader();
	for (int i = 1;i <= 10;i++) {
		cout << "  " << i << ColumnSeprator(i) << "\t";
		for (int j = 1;j <= 10;j++) {
			cout << i * j << "\t";
		}
		cout << "\n";
	}
}

int main()
{
	PrintTable();

}