#ifndef HABITAT_H_INCLUDED
#define HABITAT_H_INCLUDED

#include "Cell.h"
#include <iostream>
#include <string>

class Habitat : public Cell {
public :
    Habitat();
    ~Habitat();
private :
    bool is_cage;
    string type_habitat = "habitat";
};

#endif // HABITAT_H_INCLUDED
