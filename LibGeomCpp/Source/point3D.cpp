#include <iostream>
#include "../Header/point3D.hpp"
#include "../Header/point.hpp"
using namespace std;
Point3D::Point3D()
{

}
Point3D::Point3D(float abs, float ord, float axeZ)
{
	Point(abs,ord);
	z = axeZ;
}
Point3D::~Point3D()
{
	
}

void Point3D::display()
{
	Point::display();
	cout << "z: " << z << endl;
}
void Point3D::setZ(float vZ)
{
	z = vZ;
}

