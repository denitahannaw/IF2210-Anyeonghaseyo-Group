#ifndef RESTOURANT_H_INCLUDED
#define RESTOURANT_H_INCLUDED

#include "Facility.h"
#include <iostream>
#include <string>

class Restourant : public Facility {
public :
    Restourant();
    ~Restourant();
private :
    string type_Restourant = "restourant";
};

#endif // RESTOURANT_H_INCLUDED
