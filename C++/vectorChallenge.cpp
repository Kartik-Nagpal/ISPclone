//Inclass Challenge #8 - Keep pushing until a 42 is returned by the random number generator and is added to the back of the vector. I included a cout with each line, so that you 
//can see that the program is in fact loading. If I use time as the seed for random, it oftentimes generates the same number before the computer ticks, and so I am using time 
//plus an increment. I also included a printVect() for debugging purposes.
//Written by Kartik Nagpal - kn8767

#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using std::cout;
using std::endl;
using std::vector;

int vect42();

int main() {
	int s = vect42();
	cout << "Size till 42: " << s << endl;
	return 0;
}



int vect42() {
	srand(time(NULL));
	vector<int> vect(1, (100.*rand()/RAND_MAX));
	while(vect.back() != 42)
	{
		srand(vect.size() + time(NULL));
		cout << vect.back() << endl;
		vect.push_back(100.*rand()/RAND_MAX);
	}
	return vect.size();
}

void printVect(vector<int> vect) {
	cout << "my Vector contains these " << vect.size() << " values: " << endl;
	for(auto &i: vect) 
	{
		cout << i << endl;
	}
}
