#include<iostream>
#include<string>
using namespace std;

string ReadText(string message) {
	string text = "";
	cout << message << "\n";
	getline(cin,text);
	return text;
}

string BeforeDecryption(string text,short encryptionKey) {

	for (int i = 0; i <= text.length(); i++) {

		text[i] = char((int)text[i]+encryptionKey);
	}
	return text;
 }

string AfterDecryption(string text, short encryptionKey) {

	for (int i = 0; i <= text.length(); i++) {

		text[i] = char((int)text[i] - encryptionKey);
	}
	return text;
}


int main() {
	const short encryptionKey = 2;
	string text = ReadText("Please Enter Your String ?");
	string textBeforeDecryption = BeforeDecryption(text,encryptionKey);
	string textAfterDecryption = AfterDecryption(textBeforeDecryption, encryptionKey);

	cout << "\n" <<"The text is :"<< text << "\n";
	cout << "Before Encryption " << textBeforeDecryption << "\n";
	cout << "After Encryption " << textAfterDecryption << "\n";



}