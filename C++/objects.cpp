#include<iostream>
#include<random>

using std::cout;
using std::endl;


class Point{
	private:
		double x, y;

	public:
		Point() {
			x = rand();
			y = rand();
		}

		Point(double iX, double iY) {
			x = iX;
			y = iY;
		}

		double getX() {
			return x;
		}

		double getY() {
			return y;
		}

};

int main()
{
	Point p1(3.5, 5.0);
	
	cout << p1.getX() << ", " << p1.getY() << endl;
}
