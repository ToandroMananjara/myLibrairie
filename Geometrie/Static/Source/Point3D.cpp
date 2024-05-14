#include <iostream>
#include "../Header/Point3D.hpp"
#include "../Header/Point.hpp"
using namespace std;
Point3D::Point3D()
{

}
Point3D::Point3D(float abs, float ord, float z)
{
	x = abs;
	y = ord;
	this->z = z;
}
Point3D::~Point3D()
{
	
}

void Point3D::display()
{
	cout << "( " << x << ", " << y << ", " <<  z << " )" << endl;
}
void Point3D::setZ(float newZ)
{
	z = newZ;
}

