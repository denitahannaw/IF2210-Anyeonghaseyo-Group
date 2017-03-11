#ifndef AIRHABITAT_H_INCLUDED
#define AIRHABITAT_H_INCLUDED

#include "Habitat.h"
#include <iostream>
#include <string>

class AirHabitat : public Habitat {
public :
    AirHabitat();
    ~AirHabitat();
private :
    string type_AirHabitat = "air";
};

#endif // AIRHABITAT_H_INCLUDED
