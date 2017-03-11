#ifndef HABITAT_H
#define HABITAT_H

#include "Cell.h"
#include <iostream>
#include <string>

class Habitat : public Cell {
public :
    Habitat();
    ~Habitat();
private :
    bool is_cage;
    const string type_habitat = "habitat";
};

#endif 
