#ifndef ROAD_H
#define ROAD_H

#include "Facility.h"
#include <iostream>
#include <string>

class Road : public Facility {
public :
    Road();
    ~Road();
private :
    const string type_Road = "road";
};

#endif
