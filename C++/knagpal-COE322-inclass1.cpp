//Program Name: Triangle Challenge
//Created by Kartik Nagpal - kn8767

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	int a;
	int b;
	cout << "What is the value of A? ";
	cin >> a;
	cout << "What is the value of B? ";
	cin >> b;
	float c = sqrt(pow(a, 2) + pow(b, 2));
	float Theta1 = asin(a/c);
	float Theta2 = asin(b/c);
	cout << "Hypotnuse = " << c << endl;
	cout << "Theta1 = " << Theta1 << " radians" << endl;
	cout << "Theta2 = " << Theta2 << " radians" << endl;
}
