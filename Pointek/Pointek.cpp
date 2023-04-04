#include <iostream>
#include "Point.h"
#include "Point3D.h"

using namespace std;

int main()
{
	Point a(3, 5);
	Point b(4, 10);

	Point a(5);

	Point3D z(3, 4, 5);
	z.present();
	a.present();
	cout << Point3D::dist(a,z);
	

}
