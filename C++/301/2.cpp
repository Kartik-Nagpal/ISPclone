#include <iostream>
#include <cmath>

using namespace std;

int simulation() {
	srand(time(NULL));
	float Ybot = 2.0 * (1.0 * rand()/(RAND_MAX));
	float a = M_PI * (1.0 * rand()/(RAND_MAX));
	float Ytop = Ybot + sin(a);
	int numTries = 0;
	int hits = 0;
	int misses = 0;
	cout << "numTries: ";
	cin >> numTries;
	
	int counter = numTries;
	while(counter > 0) {
		Ybot = 2.0 * (1.0 * rand()/(RAND_MAX));
		a = M_PI * (1.0 * rand()/(RAND_MAX));
		Ytop = Ybot + sin(a);
		if(Ytop >= 2) {
			//cout << "hit" << endl;
			hits++;
		}
		else {
			//cout << "miss" << endl;
			misses++;
		}
		counter--;
	}
	
	cout << "In " << numTries << " trials, there were " << hits << " hits and " << misses << " misses" << endl;

	return 0;
}


int main() {
	int numSims = 0;
	cout << "How many Simulations?: ";
	cin >> numSims;

	for(int i = 0; i < numSims; i++)
	{
		simulation();
	}
}
