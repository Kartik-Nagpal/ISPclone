#include <iostream>
using std::cin;
using std::cout;
using std::endl;



int main() {
	for(int i = 0; i >= 0; i++)
	{
		int* g = (int*)(malloc(i));
		cout << "userspace at " << i << "= " << *g << endl;
		*g = 0;
	} 
}
