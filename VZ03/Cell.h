#ifndef CELL_H
#define CELL_H

//#include "Renderable.h"
#include <string>
using namespace std;


class Cell : public Renderable {

public :
    Cell(int,int,char);
    virtual string getTipe(char );
    int getX();
    int getY();
    int setX(int);
    int setY(int);

private :
    int x;
    int y;
    char symbol;
    string tipeCell;
};



#endif // CELL_H_INCLUDED
