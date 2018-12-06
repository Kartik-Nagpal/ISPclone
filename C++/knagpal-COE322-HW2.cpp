//Program Name: K Shift Decoder/Encoder - 10/2/18
//Created by Kartik Nagpal - kn8767 - kartiknagpal@utexas.edu
//This program shifts a given message by a given "n" digits to encode, and shift by "-n" digits to then decode.

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void shift(string &m, int &s);


int main() {
	string message;
	int k;
	string a;
	cout << "This program works for both UPPERCASE and lowercase letters, and is invariant on all symbols and numbers." << endl;
	cout << "What is the Message?: ";
	std::getline(std::cin, message);
	cout << "What is the shift?: ";
	cin >> k;
	cout << "Encode or Decode(e/d)?: ";
	cin >> a;
	if(a == "e")
	{
		shift(message, k);
	}
	else if(a == "d")
	{
		k *= -1;
		shift(message, k);
	}
	else
	{
		cout << "Not a valid input for Encode or Decode";
	}
	return 0;
}


void shift(string &m, int &s) {
	for(int i = 0; i < m.length(); i++)
	{
		s %= 26;
		if(s < 0)
			s = (s+26)%26;
		int c = int(m[i]);
		int k;
		if(c <= 64 || c >= 91 && c <= 96) 
			k = c;
		else if(c <= 90)
			k =(c-65+s)%26 + 65;
		else if(c <= 122)
			k =(c-97+s)%26 + 97;
		else
			k=c;
		m[i] = char(k);
	
	}
	cout << "New Message: " << m << endl;
}
