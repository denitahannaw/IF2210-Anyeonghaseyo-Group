#ifndef VIEW_H
#define VIEW_H

#include <iostream>

using namespace std;

/**
* @class View
* 
*/
class View{
public:
	

	/**
	* @brief Constructor
	* inisialisasi View 
	* @param brs nilai N_BRS
	* @param kol nilai N_KOL 
	*/
	View(int brs, int kol);

	/**
	* @brief Setter elemen matrix
	* Menset matrix[brs][kol] dengan nilai val
	* @param brs Baris matriks yang akan diset
	* @param kol Kolom matriks yang akan diset
	* @param val Nilai yang akan diset ke matriks[brs][kol]
	*/
	void setView(int brs, int kol, char val);

	/**
	* @brief Getter elemen matrix
	* Mendapatkan elemen matrix[brs][kol]
	* @param brs Baris matrix yang akan diambil elemennya
	* @param kol Kolom matrix yang akan diambil elemennya
	* @return matrix[brs][kol]
	*/
	char getView(int brs, int kol);

	/**
	* @brief Mencetak seluruh isi matrix
	*/
	void printView();

	/**
	* @brief Mencetak isi matrix dengan batas tertentu
	* 0 <= kiri < kanan <= N_KOL
	* 0 <= atas < bawah <= N_BRS
	* @param kiri Batas kiri
	* @param atas Batas atas
	* @param kanan Batas kanan
	* @param bawah Batas bawah
	*/
	void printView(int kiri, int atas, int kanan, int bawah);

private:
	int N_BRS, N_KOL;
	char** matrix;
};
#endif