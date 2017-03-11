#ifndef FACILITY_H
#define FACILITY_H

#include "Cell.h"
#include <iostream>
#include <string>

class Facility : public Cell {
public :
    Facility();
    ~Facility();
private :
    const string type_Facility = "facility";
};

#endif 
