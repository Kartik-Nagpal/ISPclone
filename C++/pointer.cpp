//Program Name: Hello World

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	
	float f = 3.0;
	cout << f << endl;
	float* a = &f;	
	cout << a << " =" << *a << endl;
	*a = 3.14;
	cout << f << endl;

	cout << "Char:" << sizeof(char) << endl;

}


int solve(int &i)
{
	i = 1;
	return 0;
}
