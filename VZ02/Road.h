#ifndef ROAD_H_INCLUDED
#define ROAD_H_INCLUDED

#include "Facility.h"
#include <iostream>
#include <string>

class Road : public Facility {
public :
    Road();
    ~Road();
private :
    string type_Road = "road";
};

#endif // ROAD_H_INCLUDED
