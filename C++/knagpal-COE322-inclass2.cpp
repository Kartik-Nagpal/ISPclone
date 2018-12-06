//Program Name: 1 Million Heads or Tails Flips
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
	int cHeads = 0;
	int cTails = 0;
	int numFlips = 1000000;
	int i;
	for(i = 0; i < numFlips; i++) {
		int random_number = rand();
		if(random_number%2 == 0) { 
			cHeads++;
		}
		else {
			cTails++;
		}
	}
	cout << i << " coins were flipped." << endl;
	cout << "The Number of Heads flipped= " << cHeads << endl;
	cout << "The Number of Tails flipped= " << cTails << endl;
}
