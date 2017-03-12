#ifndef LANDHABITAT_H
#define LANDHABITAT_H

#include "Habitat.h"
#include <iostream>
#include <string>

class LandHabitat : public Habitat {
public :
    LandHabitat(int,int,char);
    ~LandHabitat();
    string getTipe(char); //override virtual
private :
   string tipe = "land";
};

#endif
