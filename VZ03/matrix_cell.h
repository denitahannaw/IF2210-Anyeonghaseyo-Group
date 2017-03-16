// Denita Hanna Widiastuti - 13514008
// File matriks_cell.h

#ifndef _MATRIXCELL_H_
#define _MATRIXCELL_H_

#include <iostream>
#include "Cell.h"

using namespace std;

/**
* @class MatrixCell
* Kelas MarixCell merupakan kontainer Cell berbentuk matrix
*/
class MatrixCell {
public :
	/**
	* @brief Constructor
	* Menciptakan MatrixCell sebesar brs dan kol
	* @param brs Merupakan besar baris
	* @param kol Merupakan besar kolom
	*/
	MatrixCell(int brs, int kol);
	/**
	* @brief Copy Constructor
	*/
	MatrixCell(const MatrixCell&);
	/**
	* @brief Destructor
	*/
	~MatrixCell();
	/**
	* @brief Mendapatkan Cell dari matrix pada titik (i,j)
	* @param i Indeks ke i untuk baris matrix
	* @param j Indeks ke j untuk kolom matrix
	* @return Cell[i][j]
	*/
	Cell* getCell(int i, int j);
	/**
	* @brief Memberikan nilai C pada matrix[a][b] 
	* @param a Indeks baris matrix
	* @param b Indeks kolom matrix
	*/
	void setCell(Cell* C, int a, int b);
	/**
	* @brief Mendapatkan nilai baris matrix
	* @return N_BRS
	*/
	int getNBRS();
	/**
	* @brief Mendapatkan nilai kolom matrix
	* @return N_KOL
	*/
	int getNKOL();

private :
	Cell ***matrix;
	const int N_BRS;
	const int N_KOL;
};
#endif
