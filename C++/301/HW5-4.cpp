#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	ofstream out;
	out.open("noisySin.txt", ios::out);
	srand(time(NULL));
	
	float tMax = 10;
	float tStep = 0.02;
	vector<float> t = {0};
	vector<float> x;
	vector<float> xS;
	x.push_back(exp(-.5*t.back())*sin(t.back()) + (0.1* (rand()*1.0/RAND_MAX) - 0.05));

	for(int i = 1; i <= tMax/tStep; i++) {
		t.push_back(roundf((t.back() + tStep)*100)/100);
		x.push_back(exp(-.5*t.back())*sin(t.back()) + (0.1* (rand()*1.0/RAND_MAX) - 0.05));
		if(i == 1)					
			xS.push_back((x.at(0) +  x.at(1))/2.0);
		else if(t.back() == tMax)
			xS.push_back((x.at(x.size()-2) + x.back())/2.0);
		else {
			xS.push_back((x.at(i-2) + x.at(i))/2.0);
		}
			
		cout << "t=" << t.back() << "\tx=" << x.back() << "\txS=" << xS.back() << endl;
		out << t.back() << "\t" << x.back() << "\t" << xS.back() << endl;
	}
	
	out.close();
	
	return 0;
}
