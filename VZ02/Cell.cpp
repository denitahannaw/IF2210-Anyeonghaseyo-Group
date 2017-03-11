// nama file : Cell.cpp

#include "Cell.h"
#include <iostream>
#include <string>
#include "stdlib.h"

Cell :: Cell(int x,int y){
    this->x = x;
    this->y = y;
}

string Cell :: getTipe(){
       
}

int Cell :: getX(){
    return x;
}

int Cell :: getY(){
    return y;
}

int Cell :: setX(int a){
    x = a;
}

int Cell :: setY(int b){
    y = b;
}
