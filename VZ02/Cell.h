#ifndef CELL_H_INCLUDED
#define CELL_H_INCLUDED

#include <string>
#include "Renderable.h"

class Cell : public Renderable {

public :
    Cell(int x,int y);
    virtual string getTipe();
    int getX();
    int getY();
    int setX(int a);
    int setY(int b);

private :
    int x;
    int y;
};

#endif // CELL_H_INCLUDED
