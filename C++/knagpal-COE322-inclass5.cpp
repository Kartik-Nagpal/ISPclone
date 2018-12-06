//Program Name:	Sum of Squares - prints first 100 sums 
//Created by Kartik Nagpal - kn8767 - kartiknagpal@utexas.edu

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void sum(int &n, int &S, int &m);

int main() {
	int n = 1;
	int S0 = 1;
	int max = 100;
	sum(n, S0, max);
	return 0;
}

void sum(int &n, int &S, int &m) //n = current count; S = sum; m = max;
{
	cout << "S(" << n << ")= " << S << endl;
	if(n < m)
	{
		S += pow(n, 2);
		n++;
		sum(n, S, m);
	}
}
