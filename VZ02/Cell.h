#ifndef CELL_H
#define CELL_H

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

#endif
