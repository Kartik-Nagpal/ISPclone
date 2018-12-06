#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float G = 6.67e-11;
	float M = 9.982e12;
	float R = 2650;

	float Vesc = sqrt((2.0*G*M)/(R));
	//cout << "Escape Velocity is: " << Vesc << endl;
	float jumpV = 0.;

	cout << "What was the Jump Velocity?: ";
	cin >> jumpV;

	if(jumpV < Vesc) {
		//You didn't escape.
		cout << "You weren't able to escape the asteroid's gravity" << endl;	
	}
	else {
		//calculate mass for the case where you wouldn't escape
		float m = (pow(jumpV, 2) * R)/(2*G);
		cout << "You escaped! But if the mass of the satellite had been " << m << "kg you wouldn't have." << endl;
	}

	return 0;
}
