#ifndef _SPHEREHPP
#define _SPHEREHPP

#include "./point3D.hpp"
class Sphere{
	public:
		Sphere(Point3D O, float x);
		Sphere();
		~Sphere();
		float getRayon();
		Point3D getOrigine();
		void setRayon(float nvRayon);
		void setOrigine(Point3D nvOrigine);
		void display();
		void surface();
        void volume();
	protected:
		Point3D origine;
		float rayon;
};
#endif