//Inclass Challenge 9.1: Create a custom Point class with a 2 parameter constructor and the methods: distance_to_origin(), printout(), distance(Point point2)
//Kartik Nagpal - kn8767 - 10/30/18
#include <iostream>
#include <random>
#include <cmath>

using std::cout;
using std::endl;


class Point{
	private:
		float x, y;

	public:
		Point() {
			x = 0;
			y = 0;
		}

		Point(float xcoordinate, float ycoordinate) {
			x = xcoordinate;
			y = ycoordinate;
		}

		double getX() {
			return x;
		}

		double getY() {
			return y;
		}

		float distance_to_origin() {
			return sqrt(pow(x,2) + pow(y,2));
		}

		void printout() {
			cout << "(" << x << ", " << y << ")" << endl; 
		}

		float distance(Point pt2) {
			return sqrt(pow(x-pt2.x, 2) + pow(y-pt2.y, 2));
		}
};


int main()
{
	Point p1(3, 4);
	Point p2(1, 0);

	cout << "Distance to Origin: " << p1.distance_to_origin() << endl;
	p1.printout();
	cout << "Distance from p1 to p2: " << p1.distance(p2) << endl;

}
