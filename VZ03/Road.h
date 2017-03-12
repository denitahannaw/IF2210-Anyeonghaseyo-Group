#ifndef ROAD_H
#define ROAD_H

#include "Facility.h"
#include <string>
using namespace std;

class Road : public Facility {
public :
    Road(int,int,char);
    virtual ~Road();
    virtual string getTipe();
private :
    string tipe = "road";
};

#endif
