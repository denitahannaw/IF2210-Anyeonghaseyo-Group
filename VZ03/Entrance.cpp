
#include "Entrance.h"
#include <string>
using namespace std;

Entrance :: Entrance(int x,int y, char s) : Road(x,y,s){

}

Entrance :: ~Entrance(){

}

string Entrance :: getTipe(){
    return tipe;
}
