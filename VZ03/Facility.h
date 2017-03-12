#ifndef FACILITY_H
#define FACILITY_H

#include "Cell.h"
#include <string>
using namespace std;

class Facility : public Cell {
public :
    Facility(int,int,char);
    // ~Facility();
    virtual string getTipe()=0;

};

#endif
