#include<iostream>
using namespace std;

int ReadPostiveNumber(string message) {
	int number = 0;
	do {
		cout << message << "\n";
		cin >> number;
	} while (number < 0);
	return number;
}

void EnterElemants(int arr[], int number) {
	for (int i = 0;i < number;i++) {

		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
}
void PrintAllElements(int arr[],int number,int &counter) {

	EnterElemants(arr, number);
	int specificNumber = ReadPostiveNumber("Please The Number That you want to search");
	for (int j = 0;j < number;j++) {


		cout << arr[j]<< " ";


		if (arr[j] == specificNumber) {
			counter++;
		}
	}
	cout <<"\n" << specificNumber << " is repeated " << counter<<" time(s)";
}
int main() {
	int arr[100];
	int number = ReadPostiveNumber("Please The Number of elements which you want to enter");
	int counter = 0;
	PrintAllElements(arr,number,counter);
}