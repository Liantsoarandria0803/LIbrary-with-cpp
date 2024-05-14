#ifndef _CYLINDREHPP
#define _CYLINDREHPP
#include "./point.hpp"
#include "./cercle.hpp"
class Cylindre{
	public:
		Cylindre(Cercle C, float 	axe);
		~Cylindre();
		Cercle getBase();
		float getHauteur();
		void setBase(Cercle nvBase);
		void setHauteur(float nvHauteur);
		void display();
		void volume();
		void surface();
	protected:
		Cercle base;
		float hauteur;
};
#endif
