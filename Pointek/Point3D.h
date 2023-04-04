#pragma once
#include "Point.h"
class Point3D : public Point
{
	double z;

public:
	Point3D();
	Point3D(double x);
	Point3D(double x, double y, double z);

	void present();
};

