#ifndef RESTOURANT_H
#define RESTOURANT_H

#include "Facility.h"
#include <string>
using namespace std;
/**
* @class Restourant
* Kelas Restourant adalah kelas turunan dari Facility
*/
class Restourant : public Facility {
public :
	/**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    Restourant(int x,int y,char s);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    virtual string getTipe();
private :
    string tipe = "restourant";
};

#endif
