#ifndef ENTRANCE_H
#define ENTRANCE_H

#include "Road.h"
#include <string>
using namespace std;

class Entrance : public Road {
public :
    Entrance(int,int,char);
    // ~Entrance();
    string getTipe();
private :
    string tipe = "entrance";
};

#endif
