#ifndef _MATRIXCELL_H_
#define _MATRIXCELL_H_

#include <iostream>
#include "Cell.h"

using namespace std;

//#include "cage.h"

class MatrixCell {
public :
	MatrixCell(int, int);
	MatrixCell(const MatrixCell&);
	~MatrixCell();
	// MatrixCell& operator=(MatrixCell&);
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
