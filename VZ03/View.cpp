#include "View.h"

/**
* @brief Constructor
* inisialisasi View 
* @param brs nilai N_BRS
* @param kol nilai N_KOL 
*/
View::View(int brs, int kol){
	N_BRS = brs;
	N_KOL = kol;

	matrix = new char * [N_BRS];
	for(int i=0; i<N_BRS; i++){
		matrix[i] = new char[N_KOL];
	}
}

/**
* @brief Setter elemen matrix
* Menset matrix[brs][kol] dengan nilai val
* @param brs Baris matriks yang akan diset
* @param kol Kolom matriks yang akan diset
* @param val Nilai yang akan diset ke matriks[brs][kol]
*/
void View::setView(int brs, int kol, char val){
	matrix[brs][kol] = val;
}

/**
* @brief Getter elemen matrix
* Mendapatkan elemen matrix[brs][kol]
* @param brs Baris matrix yang akan diambil elemennya
* @param kol Kolom matrix yang akan diambil elemennya
* @return matrix[brs][kol]
*/
char View::getView(int brs, int kol){
	return matrix[brs][kol];
}

/**
* @brief Mencetak seluruh isi matrix
*/
void View::printView(){
	for(int i=0; i<N_BRS; i++){
		for(int j=0; j<N_KOL; j++){
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
}

/**
* @brief Mencetak isi matrix dengan batas tertentu
* 0 <= kiri < kanan <= N_KOL
* 0 <= atas < bawah <= N_BRS
* @param kiri Batas kiri
* @param atas Batas atas
* @param kanan Batas kanan
* @param bawah Batas bawah
*/
void View::printView(int kiri, int atas, int kanan, int bawah){
	for(int i=atas; i<bawah; i++){
		for(int j=kiri; j<kanan; j++){
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
}