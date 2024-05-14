#ifndef __ACTIVATIONHPP
#define __ACTIVATIONHPP

#include <iostream>
#include <fstream>
#include <string>

class Activation
{
	public:
	    Activation();
	    ~Activation();
	    bool verifActivation();
	    void activate();
	    bool getStatus();
	    int getPoint();
	protected:
	    std::string keyTest = "ABCD";
	    int point;
	    bool status = false;
};

#endif
