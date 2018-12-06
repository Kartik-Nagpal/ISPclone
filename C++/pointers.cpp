//Program Name: Triangle Challenge with Structures
//Created by Kartik Nagpal - kn8767 - kartiknagpal@utexas.edu

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct triangle {
	float a;
	float b;
	float c;
	float Theta1;
	float Theta2;
};

int solve(triangle &t1, triangle &t2);
float radToDeg(float r);


int main() {
	triangle T1;
	triangle T2;

	float* a = T1.a;	

	cout << "What is the value of A for Triangle 1? ";
	cin >> T1.a;
	cout << "What is the value of B for Triangle 1? ";
	cin >> T1.b;
	
	
	cout << "What is the value of A for Triangle 2? ";
	cin >> T2.a;
	cout << "What is the value of B for Triangle 2? ";
	cin >> T2.b;
	
	solve(T1, T2);	
	
	return 0;
}

int solve(triangle &t1, triangle &t2) {
	t1.c = sqrt(pow(t1.a, 2) + pow(t1.b, 2));
	t1.Theta1 = asin(t1.a/t1.c);
	t1.Theta2 = asin(t1.b/t1.c);
	cout << "For A=" << t1.a << " and B=" << t1.b << endl;
	cout << "Hypotnuse = " << t1.c << endl;
	cout << "Theta1 = " << t1.Theta1 << " radians" << "(" << radToDeg(t1.Theta1) << " degrees)" << endl;
	cout << "Theta2 = " << t1.Theta2 << " radians" << "(" << radToDeg(t1.Theta2) << " degrees)" << endl << endl;



	t2.c = sqrt(pow(t2.a, 2) + pow(t2.b, 2));
	t2.Theta1 = asin(t2.a/t2.c);
	t2.Theta2 = asin(t2.b/t2.c);
	cout << "For A=" << t2.a << " and B=" << t2.b << endl;
	cout << "Hypotnuse = " << t2.c << endl;
	cout << "Theta1 = " << t2.Theta1 << " radians" << "(" << radToDeg(t2.Theta1) << " degrees)" << endl;
	cout << "Theta2 = " << t2.Theta2 << " radians" << "(" << radToDeg(t2.Theta2) << " degrees)" << endl << endl;

	return 0;
}

float radToDeg(float r) {
	float d = (r/M_PI)*180;
	return d;
}
