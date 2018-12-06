#include <iostream>
#include <fstream>
#include <cmath>
//#include <rand>

using namespace std;

int main() {
	ofstream out;
	out.open("noisySineData.txt", ios::out);
	srand(time(NULL));
	
	float t[5001];
	float f[5001];
	float g[5001];


	for(int i = 0; i < (sizeof(t)/(sizeof(t[0]))); i++) {
		t[i] = i*0.01;
		f[i] = 1.2*sin(t[i]) + (0.4* (rand()*1.0/RAND_MAX) - 0.2);
		if(f[i] >= 0.8)
			g[i] = 0.8;
		else if(f[i] <= -.8)
			g[i] = -.8;
		else
			g[i] = f[i];
			
		cout << "t=" << t[i] << "\tf=" << f[i] << "\tg=" << g[i] << endl; 

		out << t[i] << "\t" << f[i] << "\t" << g[i] << endl; 

	}
	
	out.close();
	
	return 0;
}
