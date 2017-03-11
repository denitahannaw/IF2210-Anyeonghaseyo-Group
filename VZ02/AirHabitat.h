#ifndef AIRHABITAT_H
#define AIRHABITAT_H

#include "Habitat.h"
#include <iostream>
#include <string>

class AirHabitat : public Habitat {
public :
    AirHabitat();
    ~AirHabitat();
private :
   const string type_AirHabitat = "air";
};

#endif
