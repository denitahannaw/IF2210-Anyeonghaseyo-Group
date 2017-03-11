#ifndef WATERHABITAT_H_INCLUDED
#define WATERHABITAT_H_INCLUDED

#include "Habitat.h"
#include <iostream>
#include <string>

class WaterHabitat : public Habitat {
public :
    WaterHabitat();
    ~WaterHabitat();
private :
    string type_WaterHabitat = "water";
};


#endif // WATERHABITAT_H_INCLUDED
