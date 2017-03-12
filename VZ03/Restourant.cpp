
#include "Restourant.h"
#include <string>
using namespace std;

Restourant :: Restourant(int x,int y, char s) : Facility(x,y,s){

}

Restourant :: ~Restourant(){

}

string Restourant :: getTipe(){
    return tipe;
}
