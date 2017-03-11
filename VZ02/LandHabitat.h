#ifndef LANDHABITAT_H_INCLUDED
#define LANDHABITAT_H_INCLUDED

#include "Habitat.h"
#include <iostream>
#include <string>

class LandHabitat : public Habitat {
public :
    LandHabitat();
    ~LandHabitat();
private :
   string type_LandHabitat = "land";
};

#endif // LANDHABITAT_H_INCLUDED
