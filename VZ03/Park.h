#ifndef PARK_H
#define PARK_H

#include "Facility.h"
#include <string>
using namespace std;
/**
* @class Park
* Kelas Park adalah kelas turunan dari Facility
*/
class Park : public Facility {
public :
	/**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    Park(int x,int y,char s);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    virtual string getTipe();
private :
    string tipe = "park";
};

#endif
