#ifndef CELL_H
#define CELL_H

#include "Renderable.h"
#include <string>
using namespace std;

/**
* @class Cell
* Kelas Cell menyatakan petak pada Virtual Zoo. 
* Merupakan turunan dari kelas Renderable.
*/
class Cell : public Renderable {
public :
    /**
    * @brief Constructor
    * @param x Indeks baris
    * @param y Indeks kolom
    * @param s Simbol
    */
    Cell(int x,int y,char s);
    /**
    * @brief Mendapatkan tipe  Cell
    * @return tipe
    */
    virtual string getTipe()=0;
    /**
    * @brief Mendapatkan x
    * @return x posisi x dari Cell
    */
    int getX();
    /**
    * @brief Mendapatkan y
    * @return y posisi y dari Cell
    */
    int getY();
    /**
    * @brief Mengganti nilai x Cell dengan nilai a
    * @param a Nilai yang akan menggantikan x
    */
    void setX(int a);
    /**
    * @brief Mengganti nilai y Cell dengan nilai b
    * @param b Nilai yang akan menggantikan y
    */
    void setY(int b);
    /**
    * @brief Mengembalika karakter symbol dari Cell
    * @return symbol
    */
    char render();


private :
    int x;
    int y;
    char symbol;
    // string tipeCell;
    
};



#endif // CELL_H_INCLUDED
