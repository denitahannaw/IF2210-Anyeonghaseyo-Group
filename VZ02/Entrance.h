#ifndef ENTRANCE_H
#define ENTRANCE_H

#include "Road.h"
#include <iostream>
#include <string>

class Entrance : public Road {
public :
    Entrance();
    ~Entrance();
private :
    string type_Entrance = "entrance";
};

#endif 
