
#include "Restourant.h"
#include <string>
using namespace std;

Restourant :: Restourant(int x,int y, char s) : Facility(x,y,s){

}

Restourant :: ~Restourant(){

}

Restourant :: getTipe(char s){
    return tipe;
}
