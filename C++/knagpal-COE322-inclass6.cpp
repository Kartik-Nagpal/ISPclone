//Program Name:	Fibbonacci Sequence  - prints how many user specifies 
//Created by Kartik Nagpal - kn8767 - kartiknagpal@utexas.edu

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void fib(int &n, int &F0, int &F1, int &m);

int main() {
	int n = 1;
	int F0 = 1;
	int F1 = 1;
	int max;
	cout << "How many numbers in Fibbonaci Sequence? ";
	cin >> max;
	cout << "Sequence: " << F0;
	max--;
	fib(n, F0, F1, max);
	return 0;
}

void fib(int &n, int &F0, int &F1, int &m) //n = current count; S = sum; m = max;
{
	if(n <= m)
	{
		cout << ", " << F1;
		int F = F1;
		F1 = F1 + F0;
		F0 = F;
		n++;
		fib(n, F0, F1, m);
	}
	else
	{
		cout << "." << endl;
	}
}
