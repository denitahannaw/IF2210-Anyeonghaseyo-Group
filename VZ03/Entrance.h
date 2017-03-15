#ifndef ENTRANCE_H
#define ENTRANCE_H

#include "Road.h"
#include <string>
using namespace std;
/**
* @class Entrance
* Kelas Entrance adalah kelas turunan dari Facility
*/
class Entrance : public Road {
public :
	/**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    Entrance(int x,int y,char z);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    string getTipe();
private :
    string tipe = "entrance";
};

#endif
