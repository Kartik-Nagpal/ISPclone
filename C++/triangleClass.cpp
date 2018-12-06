//This program uses the point class from the previous assignments to create a triangle object, which has the same functionaility as the old program, with the added ability of
//utilizing the point object.
//Kartik Nagpal - kn8767
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


class Triangle{
	private:
		float a, b, c;
		float theta1, theta2;

	public:
		Triangle() {
			a = 3;
			b = 4;
			genThetas();			
		}

		Triangle(float side1, float side2) {
			a = side1;
			b = side2;
			genThetas();			
		}

		Triangle(Point p1, Point p2, Point p3) {
			a = p1.distance(p2);
			b = p1.distance(p3);
			genThetas();
		}

		double getA() {
			return a;
		}


		double getB() {
			return b;
		}


		double getC() {
			return c;
		}

		double getTheta1() {
			return theta1;
		}

		double getTheta2() {
			return theta2;
		}

		float hypotnuse() {
			c = sqrt(pow(a,2) + pow(b,2));
			return c;
		}
		
		void genThetas() {
			hypotnuse();
			theta1 = radToDeg(asin(a/c));
			theta2 = radToDeg(asin(b/c));
		}

		float radToDeg(float r) {
			float d = (r/M_PI)*180;
			return d;
		}
		
		string printS() {
			return ("Triangle with sides " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + "\nand angles " + to_string(theta1) + ", " + to_string(theta2)); 
		}

		void printout() {
			cout << "Triangle with sides " << a << ", " << b << ", " << c << endl << "and angles " << theta1 << ", " << theta2 << endl;
		}
};



int main()
{
	Triangle t(5.0, 12.0);
	t.printout();

	Point pt1(0,0);
	Point pt2(5,0);
	Point pt3(0,12);

	Triangle t2(pt1, pt2, pt3);
	t2.printout();
}
