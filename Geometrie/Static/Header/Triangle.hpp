#ifndef _TRIANGLEHPP
#define _TRIANGLEHPP

class Triangle{
	public:
        Triangle();
		Triangle(float x,float y, float z);
		~Triangle();
		float getCoteA();
		float getCoteB();
        float getCoteC();
		void setCoteA(float newCoteA);
		void setCoteB(float newCoteB);
        void setCoteC(float newCoteC);
		void display();
		void perimetre();
		void aire();
	protected:
		float coteA, coteB, coteC;	
};
#endif