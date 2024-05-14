#ifndef _CERCLEHPP
#define _CERCLEHPP

#include "./point.hpp"
class Cercle{
	public:
		Cercle(Point O, float x);
		Cercle();
		~Cercle();
		float getRayon();
		Point getOrigine();
		void setRayon(float nvRayon);
		void setOrigine(Point nvOrigine);
		void display();
		void perimetre();
		void surface();
	protected:
		Point origine;
		float rayon;
};
#endif
