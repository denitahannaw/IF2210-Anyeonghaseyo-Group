#include "matrix_cell.h"

// ctor matriks dengan paramater
MatrixCell::MatrixCell(int brs, int kol) : N_BRS(brs), N_KOL(kol) {
	matrix = new Cell**[N_BRS];
	for (int i=0; i<N_BRS; i++) {
		(matrix)[i] = new Cell*[N_KOL];
	}

}

// cctor matriks
MatrixCell::MatrixCell(const MatrixCell& Z) : N_BRS(Z.N_BRS), N_KOL(Z.N_KOL) {
	
	matrix = new Cell**[N_BRS];
	for (int i=0; i<N_BRS; i++) {
		(matrix)[i] = new Cell*[N_KOL];
	}

}

// dtor matriks
MatrixCell::~MatrixCell() {
	for (int i=0; i<N_BRS; i++)
		delete [] (matrix)[i];
	delete [] (matrix);
}

// get elemen cell sesuai paramater
Cell* MatrixCell::getCell(int i, int j) {
	return matrix[i][j];
}

// set elemen cell
void MatrixCell::setCell(Cell* C, int a, int b) {
	matrix[a][b] = C;
}

// get nilai baris
int MatrixCell::getNBRS() {
	return N_BRS;
}

// get nilai kolom
int MatrixCell::getNKOL() {
	return N_KOL;
}
