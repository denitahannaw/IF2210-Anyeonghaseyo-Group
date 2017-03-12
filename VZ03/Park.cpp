
#include "Park.h"
#include <string>
using namespace std;

Park :: Park(int x, int y, char s) : Facility(x,y,s){

}

Park :: ~Park(){

}

Park :: getTipe(char s){
    return tipe;
}
