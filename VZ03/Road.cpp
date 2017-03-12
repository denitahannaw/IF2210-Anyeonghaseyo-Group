
#include "Road.h"
#include <string>
using namespace std;

Road :: Road(int x,int y,char s) : Facility(x,y,s){

}

// Road :: ~Road(){

// }

string Road :: getTipe(){
    return tipe;
}
