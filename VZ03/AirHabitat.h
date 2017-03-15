#ifndef WaterHabitat_H
#define WaterHabitat_H

#include "Habitat.h"
#include <string>
using namespace std;
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
    string tipe = "air";
};

#endif
