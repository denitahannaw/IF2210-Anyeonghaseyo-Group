
#include "AirHabitat.h"
#include <string>
using namespace std;

AirHabitat :: AirHabitat(int x,int y,char s) : Habitat(x,y,s){

}

AirHabitat :: ~AirHabitat(){

}

string AirHabitat :: getTipe(char s){
    return tipe;
}
