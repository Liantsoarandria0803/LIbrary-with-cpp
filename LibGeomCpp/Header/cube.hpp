#ifndef _CUBEHPP
#define _CUBEHPP

class Cube{
	public:
		Cube(float x=0);
		~Cube();
		float getArrete();
		void setArrete(float nvArrete);
		void display();
		void surface();
		void volume();
	protected:
		float arrete;	
};
#endif