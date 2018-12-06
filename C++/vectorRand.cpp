#include <iostream>
#include <vector>
#include <random>

using std::cout;
using std::endl;
using std::vector;

int vect42();

int main() {
	vector<float> vect(1, (100.*rand()/RAND_MAX));
	vect.push_back((1.*rand()/RAND_MAX));

	cout << "my Vector contains these " << vect.size() << " values: " << endl;
	for(auto &i: vect) 
	{
		cout << "Looped" << endl;
		cout << i << endl;
	}
	
	int s = vect42();
	cout << "Size till 42: " << s << endl;


	return 0;
}



int vect42() {
	vector<int> vect(1, (100.*rand()/RAND_MAX));
	
	int i = 0;
	while(vect.back() != 42)
	{
		vect.push_back(100.*rand()/RAND_MAX);
		i++;
	}
	return i;
}
