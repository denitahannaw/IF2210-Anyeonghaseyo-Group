#ifndef LANDHABITAT_H
#define LANDHABITAT_H

#include "Habitat.h"
#include <iostream>
#include <string>
/**
* @class LandHabitat
* Kelas LandHabitat adalah kelas turunan dari Habitat
*/
class LandHabitat : public Habitat {
public :
	/**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    LandHabitat(int x,int y,char s);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    string getTipe(); //override virtual
private :
   string tipe = "land";
};

#endif
