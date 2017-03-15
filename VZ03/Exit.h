#ifndef EXIT_H
#define EXIT_H

#include "Road.h"
#include <string>
using namespace std;
/**
* @class Exit
* Kelas Exit adalah kelas turunan dari Road
*/
class Exit : public Road {
public :
	/**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    Exit(int x,int y,char z);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    string getTipe();
private :
    string tipe = "exit";
};

#endif
