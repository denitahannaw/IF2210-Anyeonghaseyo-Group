#ifndef WATERHABITAT_H
#define WATERHABITAT_H

#include "Habitat.h"
#include <string>
/**
* @class WaterHabitat
* Kelas WaterHabitat adalah kelas turunan dari Habitat
*/
class WaterHabitat : public Habitat {
public :
    /**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    WaterHabitat(int x,int y,char s);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    string getTipe(); // override virtual
private :
    string tipe = "water";
};


#endif
