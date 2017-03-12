#ifndef WATERHABITAT_H
#define WATERHABITAT_H

#include "Habitat.h"
#include <string>

class WaterHabitat : public Habitat {
public :
    WaterHabitat(int,int,char);
    ~WaterHabitat();
    string getTipe(char); // override virtual
private :
    string tipe = "water";
};


#endif
