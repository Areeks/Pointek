#include "Point.h"

using namespace std;

Point::Point() :
	x(0), y(0) {};
Point::Point(double x) :
	x(x), y(x) {};
Point::Point(double x, double y) :
	x(x), y(y) {};

double Point::getX() {
	return x;
}

double Point::getY() {
	return y;
}

void Point::setX(double _x) {
	x = _x;
}

void Point::setY(double _y) {
	y = _y;
}

void Point::transX(double _x) {
	x += _x; //x = x+_x;
}

void Point::transY(double _y) {
	y += _y;
}


void Point::transXY(double _x, double _y) {
	x += _x;
	y += _y;
}

void Point::present() {
	cout << "Punkt: " << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

double Point::dist(Point& one, Point& two) {
	double distanceX = two.getX() - one.getX();
	distanceX *= distanceX;
	double distanceY = two.getY() - one.getY();
	distanceY *= distanceY;

	return sqrt(distanceX + distanceY);
}