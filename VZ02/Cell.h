#ifndef CELL_H
#define CELL_H

//#include "Renderable.h"
#include <string>
using namespace std;


class Cell {
public :
    Cell(int,int,char);
    string getTipe();
    int getX();
    int getY();
    int setX(int);
    int setY(int);
    char render();


private :
    int x;
    int y;
    char symbol;
    string tipeCell;
    
};



#endif // CELL_H_INCLUDED
