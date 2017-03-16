// nama file : Cell.cpp

#include "Cell.h"
#include <string>
using namespace std;

Cell :: Cell(int x,int y, char s){
    this->x = x;
    this->y = y;
    symbol = s;

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

    if (s = '~'){
        tipeCell = "water";
    }
    else if (s = '@'){
        tipeCell = "land";
    }
    else if (s = '#'){
        tipeCell = "air";
    }
    else if (s = '*'){
        tipeCell = "park";
    }
    else if (s = '-'){
        tipeCell = "road";
    }
    else if (s = '\\'){
        tipeCell = "entrance";
    }
    else if (s = '/'){
        tipeCell = "exit";
    }
    else if (s = '$'){
        tipeCell = "restourant";
    }

}

// string Cell :: getTipe(){
//     return tipeCell;
// }

string Cell::getTipe(){
	return tipeCell;
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

char Cell::render(){
    return symbol;
}

