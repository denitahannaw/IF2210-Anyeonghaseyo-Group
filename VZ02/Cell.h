#ifndef CELL_H_INCLUDED
#define CELL_H_INCLUDED

class Cell {

public :
    Cell(int x,int y);
    char * getTipe();
    int getX();
    int getY();
    int setX(int a);
    int setY(int b);

private :
    int x;
    int y;
};

#endif // CELL_H_INCLUDED
