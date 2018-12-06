//Program Name: Triangle Challenge with Functions
//Created by Kartik Nagpal - kn8767

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

float eq_line(int x, float m, int b);


int main() {
	int pt_x = 2, yinter = 1;
	float slope = .3, pt_y;
	pt_y = eq_line(pt_x, slope, yinter);
	cout << pt_y << "= (" << slope << "*" << pt_x << ") +  "
}

