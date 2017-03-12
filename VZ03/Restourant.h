#ifndef RESTOURANT_H
#define RESTOURANT_H

#include "Facility.h"
#include <string>
using namespace std;

class Restourant : public Facility {
public :
    Restourant(int,int,char);
    virtual ~Restourant();
    string getTipe();
private :
    string tipe = "restourant";
};

#endif
