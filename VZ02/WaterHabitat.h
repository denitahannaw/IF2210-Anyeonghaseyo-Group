#ifndef WATERHABITAT_H
#define WATERHABITAT_H

#include "Habitat.h"
#include <iostream>
#include <string>

class WaterHabitat : public Habitat {
public :
    WaterHabitat();
    ~WaterHabitat();
private :
    const string type_WaterHabitat = "water";
};


#endif
