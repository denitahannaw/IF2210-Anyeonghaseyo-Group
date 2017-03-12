#ifndef AIRHABITAT_H
#define AIRHABITAT_H

#include "Habitat.h"
#include <string>
using namespace std;

class AirHabitat : public Habitat {
public :
    AirHabitat(int,int,char);
    // ~AirHabitat();
    string getTipe(); // override virtual
private :
    string tipe = "air";
};

#endif
