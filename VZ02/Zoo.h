#ifndef _ZOO_H_
#define _ZOO_H_

#include "Cell.h"
#include <iostream>
using namespace std;

class Zoo {
	public :
		Zoo(int, int);
		Zoo(const Zoo&);
		~Zoo();
		Zoo& operator=(Zoo&);
		Cell* getCell(int, int);
		void setCell(Cell*, int, int);
		int getNBRS();
		int getNKOL();

	private :
		Cell ***matrix;
		const int N_BRS;
		const int N_KOL;
};
#endif
