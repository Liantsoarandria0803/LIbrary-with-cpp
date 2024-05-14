#ifndef _TRIANGLEHPP
#define _TRIANGLEHPP

class Triangle{
	public:
        Triangle();
		Triangle(float x,float y, float z,float vhauteur);
		~Triangle();
		float getBase();
		float getCoteB();
        float getCoteC();
		float getHauteur();
		void setBase(float vbase);
		void setCoteB(float vCoteB);
        void setCoteC(float vCoteC);
		void display();
		void perimetre();
		void surface();
		void setHauteur(float vhauteur);
	protected:
		float base ,coteB, coteC, hauteur;	

};
#endif