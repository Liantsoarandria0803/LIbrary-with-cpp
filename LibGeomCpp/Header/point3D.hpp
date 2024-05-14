#ifndef _CPOINTHPP
#define _CPOINTHPP
#include "./point.hpp"
class Point3D:public Point {
	public:
		Point3D();
		~Point3D();
		Point3D(float abs, float ord, float axeZ);
		void display();
		void setZ(float vZ);
	protected:
		float z;
};

#endif
