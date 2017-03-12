#ifndef HABITAT_H
#define HABITAT_H_

#include "Cell.h"
#include <string>
using namespace std;

class Habitat : public Cell {
public :
    Habitat(int,int,char);
    virtual ~Habitat();
    virtual string getTipe(char) = 0;
private :
    bool is_cage;
    string tipe;

};

#endif
