#ifndef EXIT_H_INCLUDED
#define EXIT_H_INCLUDED

#include "Road.h"
#include <iostream>
#include <string>

class Exit : public Road {
public :
    Exit();
    ~Exit();
private :
    string type_Exit = "exit";
};

#endif // EXIT_H_INCLUDED
