//Program Name: K Shift Decoder/Encoder - 10/2/18
//Created by Kartik Nagpal - kn8767 - kartiknagpal@utexas.edu
//This program shifts a given message by a given "n" digits to encode, and shift by "-n" digits to then decode.

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void recurseSum(int &i);


int main() {
	cout << recurseSum(100) << endl;
}


void recurseSum(int &i) 
{
	if(i == 0)
		return 0;
	else
		return i+recurseSum(i-1);
}
