#include <iostream>
using namespace std;
void FillArray(int arr[100], int& arrLength)
{
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
}

bool IsPaIsPalindromeArray(int arr[100], int & length) {
	for (int i = 0;i < length;i++) {
		if (arr[i] == arr[length - i - 1]) {
			return true;
		}
	}
	return false;
}
void PrintArray(int arr[100], int length) {
	for (int i = 0;i < length; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[100];
	int arrlength = 0;
	FillArray(arr, arrlength);
	PrintArray(arr, arrlength);
	if(IsPaIsPalindromeArray(arr,arrlength))
		cout << "\nYes array is Palindrome\n";
	else
		cout << "\nNO array is NOT Palindrome\n";
}