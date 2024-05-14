#ifndef _CPOINTHPP
#define _CPOINTHPP
#include "./Point.hpp"
class Point3D:public Point {
	public:
		Point3D();
		~Point3D();
		Point3D(float abs, float ord, float z);
		void display();
		void setZ(float newZ);
		//float getX();
	protected:
		float z;
};

#endif
