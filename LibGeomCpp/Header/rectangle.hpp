#ifndef _RECTANGLEHPP
#define _RECTANGLEHPP

class Rectangle{
	public:
		Rectangle(float x=0,float y=0);
		~Rectangle();
		float getLongueur();
		float getLargeur();
		void setLongueur(float nvLongueur);
		void setLargeur(float nvLargeur);
		void display();
		void perimetre();
		void surface();
	protected:
		float longueur, largeur;	
};
#endif
