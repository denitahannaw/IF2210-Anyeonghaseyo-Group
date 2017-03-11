#ifndef ENTRANCE_H_INCLUDED
#define ENTRANCE_H_INCLUDED

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

#endif // ENTRANCE_H_INCLUDED
