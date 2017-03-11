#ifndef PARK_H
#define PARK_H

#include "Facility.h"
#include <iostream>
#include <string>

class Park : public Facility {
public :
    Park();
    ~Park();
private :
    const string type_Park = "park";
};

#endif 
