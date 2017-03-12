#ifndef PARK_H
#define PARK_H

#include "Facility.h"
#include <string>
using namespace std;

class Park : public Facility {
public :
    Park(int,int,char);
    virtual ~Park();
    string getTipe(char);
private :
    string tipe = "park";
};

#endif
