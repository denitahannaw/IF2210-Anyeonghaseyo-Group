#ifndef FACILITY_H_INCLUDED
#define FACILITY_H_INCLUDED

#include "Cell.h"
#include <iostream>
#include <string>

class Facility : public Cell {
public :
    Facility();
    ~Facility();
private :
    string type_Facility = "facility";
};

#endif // FACILITY_H_INCLUDED
