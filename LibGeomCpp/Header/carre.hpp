#ifndef _CARREHPP
#define _CARREHPP

class Carre{
	public:
		Carre(float x=0);
		~Carre();
		float getCote();
		void setCote(float nvCote);
		void display();
		void surface();
		void perimetre();
		
	protected:
		float cote;	
};
#endif