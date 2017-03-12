#ifndef EXIT_H
#define EXIT_H

#include "Road.h"
#include <string>
using namespace std;

class Exit : public Road {
public :
    Exit(int,int,char);
    ~Exit();
    string getTipe();
private :
    string tipe = "exit";
};

#endif
