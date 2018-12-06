//Program Name: Even or Odd Example
//Created by Kartik Nagpal - kn8767

#include <iostream>
#include <cmath>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	srand (time(NULL)); 
	int rand(); 
	int random_number = rand();
	cout << "The random number is " << random_number << endl; 
	if (random_number%2 == 0) { 
		cout << "The number is heads" << endl;
	}
	else {
		cout << "The number is tails" << endl;
	}
}
