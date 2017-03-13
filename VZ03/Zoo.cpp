#include "Zoo.h"

Zoo::Zoo(int brs, int kol) : N_BRS(brs), N_KOL(kol) {
	*matrix = new Cell *[brs];
	for (int i=0; i<brs; i++) 
		(*matrix)[i] = new Cell [kol];

	for (int i = 0; i < getNBRS(); i++) {
		for (int j = 0; j < getNKOL(); j++) {
			matrix[i][j].SIMBOL = ' ';
		}
	}
}

Zoo::Zoo(const Zoo& Z) : N_BRS(Z.N_BRS), N_KOL(Z.N_KOL) {
	for (int i=0; i<brs; i++)
		(*matrix)[i] [] delete;
	*matrix [] delete;

	*matrix = new Cell *[getNBRS()];
	for (int i = 0; i < getNBRS(); i++)
		(*matrix)[i] = new Cell [getNKOL()];

	for (int i = 0; i < getNBRS(); i++) {
		for (int j = 0; j < getNKOL(); j++) {
			matrix[i][j].x = Z.matrix[i][j].x;
			matrix[i][j].y = Z.matrix[i][j].y;
			matrix[i][j].TIPE = Z.matrix[i][j].TIPE;
			matrix[i][j].SIMBOL = Z.matrix[i][j].SIMBOL;
		}
	}
}

Zoo::~Zoo() {
	for (int i=0; i<brs; i++)
		delete [] (*matrix)[i];
	delete [] (*matrix);
}

Zoo& Zoo::operator=(const Zoo& Z) {
	or (int i=0; i<brs; i++)
		delete [] (*matrix)[i];
	delete [] (*matrix);

}

Cell* Zoo::getCell(int i, int j) {
	return matrix[i][j];
}

void Zoo::setCell(Cell* C, int a, int b) {
	
}

int Zoo::getNBRS() {
	return N_BRS;
}

int Zoo::getNKOL() {
	return N_KOL;
}