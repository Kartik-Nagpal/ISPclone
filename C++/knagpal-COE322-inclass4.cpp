//Program Name: Triangle Challenge with Pass by Reference Functions
//Created by Kartik Nagpal - kn8767 - kartiknagpal@utexas.edu

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void triangle(int &a, int &b, float &c, float &T1, float &T2);
float radToDeg(float r);

int main() {
	int a;
	int b;
	cout << "What is the value of A? ";
	cin >> a;
	cout << "What is the value of B? ";
	cin >> b;
	float Theta1 = 0;
	float Theta2 = 0;
	float c = 0;
	triangle(a, b, c, Theta1, Theta2);
	cout << "Hypotnuse = " << c << endl;
	cout << "Theta1 = " << Theta1 << " radians" << "(" << radToDeg(Theta1) << " degrees)" << endl;
	cout << "Theta2 = " << Theta2 << " radians" << "(" << radToDeg(Theta2) << " degrees)" <<endl;
	return 0;
}

void triangle(int &a, int &b, float &c, float &T1, float &T2) {
	c = sqrt(pow(a, 2) + pow(b, 2));
	T1 = asin(a/c);
	T2 = asin(b/c);
}

float radToDeg(float r) {
	float d = (r/M_PI)*180;
	return d;
}
