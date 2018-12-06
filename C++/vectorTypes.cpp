#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
	vector<int> myVect = {1, 2, 3};

	for(int i : myVect)
	{
		cout << i << endl;
	}

	myVect[0] = 5;
	cout << myVect.at(0) << endl;
}

