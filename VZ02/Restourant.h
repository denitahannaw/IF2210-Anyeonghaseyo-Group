#ifndef RESTOURANT_H
#define RESTOURANT_H

#include "Facility.h"
#include <iostream>
#include <string>

class Restourant : public Facility {
public :
    Restourant();
    ~Restourant();
private :
    const string type_Restourant = "restourant";
};

#endif
