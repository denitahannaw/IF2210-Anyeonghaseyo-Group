#ifndef FACILITY_H
#define FACILITY_H

#include "Cell.h"
#include <string>
using namespace std;
/**
* @class Facility
* Kelas Facility adalah kelas turunan dari Cell
*/
class Facility : public Cell {
public :
	/**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    Facility(int x,int y,char s);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    virtual string getTipe()=0;

};

#endif
