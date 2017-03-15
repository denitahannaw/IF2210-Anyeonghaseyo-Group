#ifndef _VISITOR_H_
#define _VISITOR_H_

#include <iostream>

using namespace std;
/**
* @class Visitor
* Kelas Visitor merepresentasikan seorang pengunjung Virtual Zoo. 
*/
class Visitor {
public :
	/**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    */
	Visitor(int x, int y);
	/**
    * @brief Mengganti posisi Visitor. 
    * Mengganti nilai x dengan nilai _x dan y dengan _y
    * @param _x Nilai yang akan menggantikan x
    * @param _y Nilai yang akan menggantikan y
    */
	void setPosition(int _x, int _y);
	/**
    * @brief Mendapatkan x
    * @return x posisi x dari Cell
    */
	int getX();
	/**
    * @brief Mendapatkan y
    * @return y posisi y dari Cell
    */
	int getY();
	/**
    * @brief Mengembalika karakter simbol dari Cell
    * @return simbol
    */
	char getSimbol();

private :
	int x, y;
	char simbol = 'V';
};
#endif