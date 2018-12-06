//Program Name: Triangle Challenge with Functions
//Created by Kartik Nagpal - kn8767 - kartiknagpal@utexas.edu

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

float hypotnuse(int a, int b);
float ThetaA(int a, float c);
float ThetaB(int b, float c);
float radToDeg(float r);


int main() {
	int a;
	int b;
	cout << "What is the value of A? ";
	cin >> a;
	cout << "What is the value of B? ";
	cin >> b;
	float c = hypotnuse(a,b);
	float Theta1 = ThetaA(a, c);
	float Theta2 = ThetaB(b,c);
	cout << "Hypotnuse = " << c << endl;
	cout << "Theta1 = " << Theta1 << " radians" << "(" << radToDeg(Theta1) << " degrees)" << endl;
	cout << "Theta2 = " << Theta2 << " radians" << "(" << radToDeg(Theta2) << " degrees)" <<endl;
	return 0;
}

float hypotnuse(int a, int b) {
	float c = sqrt(pow(a, 2) + pow(b, 2));
	return c;
}

float ThetaA(int a, float c) {
	float Theta = asin(a/c);
	return Theta;
}

float ThetaB(int b, float c) {
	float Theta = asin(b/c);
	return Theta;
}

float radToDeg(float r) {
	float d = (r/M_PI)*180;
	return d;
}
