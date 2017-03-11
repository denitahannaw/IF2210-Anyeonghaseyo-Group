#ifndef PARK_H_INCLUDED
#define PARK_H_INCLUDED

#include "Facility.h"
#include <iostream>
#include <string>

class Park : public Facility {
public :
    Park();
    ~Park();
private :
    string type_Park = "park";
};

#endif // PARK_H_INCLUDED
