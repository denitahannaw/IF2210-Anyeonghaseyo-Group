#ifndef AirHabitat_H
#define AirHabitat_H

#include "Habitat.h"
#include <string>
using namespace std;
/**
* @class AirHabitat
* Kelas AirHabitat adalah kelas turunan dari Habitat
*/
class AirHabitat : public Habitat {
public :
	/**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    AirHabitat(int x,int y,char s);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    string getTipe(); // override virtual
private :
    string tipe = "air";
};

#endif
