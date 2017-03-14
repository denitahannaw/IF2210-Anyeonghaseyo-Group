#ifndef _VISITOR_H_
#define _VISITOR_H_

#include "Cell.h"
#include <iostream>
using namespace std;

//#include "cage.h"

class visitor {
	public :
		Visitor();
		Visitor(int, int);
		~Visitor();
		void setPosition(int, int);
		int getPosX();
		int getPosY();
		Cell getPosition();

	private :
		Cell position;
};
#endif
