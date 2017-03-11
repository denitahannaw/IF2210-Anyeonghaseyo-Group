#ifndef LANDHABITAT_H
#define LANDHABITAT_H

#include "Habitat.h"
#include <iostream>
#include <string>

class LandHabitat : public Habitat {
public :
    LandHabitat();
    ~LandHabitat();
private :
   const string type_LandHabitat = "land";
};

#endif
