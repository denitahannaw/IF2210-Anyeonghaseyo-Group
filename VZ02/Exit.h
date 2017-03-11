#ifndef EXIT_H
#define EXIT_H

#include "Road.h"
#include <iostream>
#include <string>

class Exit : public Road {
public :
    Exit();
    ~Exit();
private :
    const string type_Exit = "exit";
};

#endif 
