//Program Name: Hello World

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


struct g { int i; double j; };
struct h { int i; char j; };

int main() {
	
	char x[3] = {'a', 'b', 'c'};
	int i[3] = {1, 2, 3};
	int y = 1;	

	cout << x << endl;
	cout << *x << endl;
	cout << *(x+1) << endl;
	cout << *(x+y) << endl;
	cout << *(x+ sizeof('a')) << endl;
	cout << "Int= " << sizeof(y) << " and Char=" << sizeof(x[0]) << endl;
	cout << "Char Array= " << sizeof(x) << " and Int Array= " << sizeof(i) << endl;

	g g1;
	cout << "g = " << sizeof(int) << " + " << sizeof(double) << " = " << sizeof(g1) << endl;
	h h1;
	cout << "h = " << sizeof(int) << " + " << sizeof(char) << " = " << sizeof(h1) << endl;

	cout << "Address of g.i = " << &(g1.i) << " or " << &g1 + 1 << endl;

	float arr[] = {1};
	for(int i = 0; i < arr.length; i++)
	{

		cout << "Here: " << arr[i] << endl;
	}
}
