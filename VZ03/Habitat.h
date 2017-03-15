#ifndef HABITAT_H
#define HABITAT_H

#include "Cell.h"
#include <string>
using namespace std;
/**
* @class Habitat
* Kelas Habitat adalah kelas turunan dari Cell
*/
class Habitat : public Cell {
public :
	/**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    Habitat(int x,int y,char z);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    virtual string getTipe()=0;

};

#endif
