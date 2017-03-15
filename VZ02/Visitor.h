#ifndef _VISITOR_H_
#define _VISITOR_H_

#include <iostream>

using namespace std;

class Visitor {
	public :
		// Visitor();
		Visitor(int, int);
		~Visitor();
		void setPosition(int, int);
		int getX();
		int getY();
		char getSimbol();

	private :
		int x, y;
		char simbol = 'V';
};
#endif