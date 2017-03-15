#include "matrix_cell.h"

MatrixCell::MatrixCell(int brs, int kol) : N_BRS(brs), N_KOL(kol) {
	matrix = new Cell**[N_BRS];
	for (int i=0; i<N_BRS; i++) {
		(matrix)[i] = new Cell*[N_KOL];
	}

}

MatrixCell::MatrixCell(const MatrixCell& Z) : N_BRS(Z.N_BRS), N_KOL(Z.N_KOL) {
	
	matrix = new Cell**[N_BRS];
	for (int i=0; i<N_BRS; i++) {
		(matrix)[i] = new Cell*[N_KOL];
	}

}

MatrixCell::~MatrixCell() {
	for (int i=0; i<N_BRS; i++)
		delete [] (matrix)[i];
	delete [] (matrix);
}

Cell* MatrixCell::getCell(int i, int j) {
	return matrix[i][j];
}

void MatrixCell::setCell(Cell* C, int a, int b) {
	matrix[a][b] = C;
}

int MatrixCell::getNBRS() {
	return N_BRS;
}

int MatrixCell::getNKOL() {
	return N_KOL;
}