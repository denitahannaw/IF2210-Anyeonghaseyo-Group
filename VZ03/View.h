#ifndef _VIEW_H_
#define _VIEW_H_

#include <iostream>
using namespace std;
/**
* @class View
* Kelas View merupakan container dalam bentuk matriks dari 
* karakter2 yang nantinya akan dicetak ke layar
*/
class View {
	public :
		/**
		* @brief Constructor
		* @param len Nilai NBRS
		* @param wid Nilai NKOL
		*/
		View(int len, int wid);
		/**
		* @brief Copy Constructor
		*/
		View(const View&);
		/**
		* @brief Destructor
		*/
		~View();
		/**
		* @brief Mendapatkan nilai val[_x][_y]
		* @param _x Index baris nilai yang ingin didapatkan
		* @param _y Index kolom nilai yang ingin didapatkan
		* @return val[_x][_y]
		*/
		char getVal(int _x, int _y);
		/**
		* @brief Mengubah nilai val[i][j] menjadi c
		* @param i Index baris nilai yang ingin diubah
		* @param j Index kolom nilai yang ingin diubah
		*/
		void setVal(int i, int j, char c);
		/**
		* @brief Mendapatkan nilai baris
		* @return NBRS
		*/
		int getNBRS();
		/**
		* @brief Mendapatkan nilai kolom
		* @return NKOL
		*/
		int getNKOL();
		/**
		* @brief Mencetak seluruh karakter yang ada
		*/
		void printView();
		/**
		* @brief Mencetak karakter pada area mulai dari titik 
		* kiri atas sampai kanan bawah
		*/
		void printView(int kiri,int atas,int kanan,int bawah);

	private :
		char** val;
		const int NBRS;
		const int NKOL;
};
#endif