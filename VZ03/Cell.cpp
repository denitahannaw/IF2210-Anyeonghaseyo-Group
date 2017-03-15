// nama file : Cell.cpp

#include "Cell.h"
#include <string>
using namespace std;

Cell :: Cell(int x,int y, char s){
    this->x = x;
    this->y = y;
    symbol = s;

    // symbol for Cell
    /*
    'w' = water
    'l' = land
    'a' = air
    'p' = park
    'r' = road
    'n' = entrance
    'x' = exit
    't' = restourant
    */

    // if (s = 'w'){
    //     tipeCell = "water";
    // }
    // else if (s = 'l'){
    //     tipeCell = "land";
    // }
    // else if (s = 'a'){
    //     tipeCell = "air";
    // }
    // else if (s = 'p'){
    //     tipeCell = "park";
    // }
    // else if (s = 'r'){
    //     tipeCell = "road";
    // }
    // else if (s = 'n'){
    //     tipeCell = "entrance";
    // }
    // else if (s = 'x'){
    //     tipeCell = "exit";
    // }
    // else if (s = 't'){
    //     tipeCell = "restourant";
    // }

}

// string Cell :: getTipe(){
//     return tipeCell;
// }

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

char Cell::render(){
    return symbol;
}

