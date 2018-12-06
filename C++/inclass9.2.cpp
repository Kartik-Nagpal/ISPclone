#include <iostream>
#include <string>
#include <cmath>

using std::to_string;
using std::string;
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
		
		string printS() {
			return ("(" + to_string(x) + ", " + to_string(y) + ")"); 
		}

		void printout() {
			cout << "(" << x << ", " << y << ")" << endl; 
		}

		float distance(Point pt2) {
			return sqrt(pow(x-pt2.x, 2) + pow(y-pt2.y, 2));
		}
};


class Line {
	private:
		Point p1, p2;

	public:
		Line(Point v1, Point v2) {
			p1 = v1;
			p2 = v2;
		}
		
		Point getPT1() {
			return p1;
		}

		Point getPT2() {
			return p2;
		}

		Point midpoint() {
			return Point((float)((p1.getX() + p2.getX())/2), (float)((p1.getY() + p2.getY())/2));  
		}

		void printout()
		{
			cout << "Line from " << p1.printS() << " to " << p2.printS() << endl;
		}
};



int main()
{
	Point p1(3, 4);
	Point p2(1, 0);

	cout << "Distance to Origin: " << p1.distance_to_origin() << endl;
	p1.printout();
	cout << "Distance from p1 to p2: " << p1.distance(p2) << endl;
	
	Line l(p1, p2);
	l.printout();
	cout << "Midpoint: " <<  (l.midpoint()).printS() << endl;
}
