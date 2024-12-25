#include<iostream>
using namespace std;
string ReadCapitalPassword(string message) {
	string password = "";
		cout << message << "\n";
		cin >> password;
		return password;
}

bool CheckPassword(string password) {
	cout << "\n";
	string word = "";
	int counter = 1;
	for (int i = 65;i <= 90;i++) {
		for (int j = 65;j <= 90;j++) {
			for (int k = 65;k <= 90;k++) {
				word += char(i);
				word += char(j);
				word += char(k);
				cout << "Trail" << counter << " : " << word << "\n";
				if (word == password)
				{
					cout << "The Password is :" << password << "\n";
					cout << "Found after :" << counter <<" Trail(S)" << "\n";
					return true; //T
				}
				
					counter++;
				    word = "";

			}

		}
	}
	return false;
}


int main() {
	CheckPassword(ReadCapitalPassword("Please Enter The string ? "));
}