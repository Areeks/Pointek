#include "Point3D.h"

Point3D::Point3D() :
	Point(0, 0), z(0) {};
Point3D::Point3D(double x) :
	Point(x, x), z(x) {};
Point3D::Point3D(double x, double y, double z) :
	Point(x, y), z(z) {};

void Point3D::present()
{
	Point::present();
	cout << "z: " << z << endl;
}
