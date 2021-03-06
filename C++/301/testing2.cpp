#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	ofstream out;
	out.open("Quest3.txt" , ios::out);
	float rE = 6.3781e6;
	float delT = 0.01;
	
	vector<float> t = {0};
	vector<float> y = {15000};
	vector<float> yN = {y[0]};
	vector<float> g = {9.8067};
	vector<float> v = {1000.};

	
	do {
		cout << "At time " << roundf(t.back()*100)/100 << " at y=" << y.back() << " and v=" << v.back() << " and g=" << g.back() << endl;
		out << roundf(t.back() * 100)/100 << "\t" << y.back() << "\t" << yN.back() << "\t" << g.back() << "\t" << v.back()  << endl;
		
		t.push_back(t.back() + delT);
		g.push_back(g[0] * pow((rE/(rE + y.back())), 2));
		v.push_back(v.back() - g.back()*delT);
		y.push_back(y.back() + v.back()*delT);
		yN.push_back(y[0] + v[0]*t.back() - 0.5*g[0]*pow(t.back(), 2));
	} while(y.back() > 0 || yN.back() > 0);

	return 0;
}
