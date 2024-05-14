#ifndef _CUBEHPP
#define _CUBEHPP

class Cube{
	public:
		Cube(float x=0);
		~Cube();
		float getArrete();
		void setArrete(float newArrete);
		void display();
		void aire();
		void volume();
	protected:
		float arrete;	
};
#endif