#ifndef CELL_H
#define CELL_H

#include <string>
using namespace std;

class Cell {

public :
    Cell(int,int,char);
    string getTipe(char);
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

#endif
