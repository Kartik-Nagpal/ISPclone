#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;

void smooth(vector<float> x, vector<float> &xS, int i, bool isLast) {
		if(i == 1)					
			xS.push_back((x.at(0) +  x.at(1))/2.0);
		else if(isLast)
			xS.push_back((x.at(x.size()-2) + x.back())/2.0);
		else {
			xS.push_back((x.at(i-2) + x.at(i))/2.0);
		}
}


int main() {
	ofstream out;
	out.open("smoothSin.txt", ios::out);
	
	float tMax = 15;
	float tStep = 0.02;
	vector<float> t = {0};
	vector<float> x;
	vector<float> xS;
	vector<float> xSS = {0};
	vector<float> xSSS = {0, 0};
	vector<float> xSSSS(3, 0);
	x.push_back(exp(-.5*t.back())*sin(t.back()) + (0.1* (rand()*1.0/RAND_MAX) - 0.05));

	for(int i = 1; i <= tMax/tStep; i++) {
		t.push_back(roundf((t.back() + tStep)*100)/100);
		x.push_back(exp(-.5*t.back())*sin(t.back()) + (0.1* (rand()*1.0/RAND_MAX) - 0.05));
		
		smooth(x, xS, i, (t.back() == tMax));
		if(i > 1)
			smooth(xS, xSS, i-1, (i == xS.size()));
		if(i > 2)
			smooth(xSS, xSSS, i-2, (i == xSS.size()));
		if(i > 3)
			smooth(xSSS, xSSSS, i-3, (i == xSSS.size()));

			
		cout << "t=" << t.back() << "\txS=" << xS.back() << "\txSS=" << xSS.back() << endl;
		out << t.back() << "\t" << x.back() << "\t" << xS.back() << "\t" << xSS.back() << "\t" << xSSS.back() << "\t" << xSSSS.back() << endl;
	}
	
	out.close();
	
	return 0;
}
