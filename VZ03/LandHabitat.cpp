#include "LandHabitat.h"

LandHabitat :: LandHabitat(int x,int y,char s) : Habitat(x,y,s){

}

LandHabitat :: ~LandHabitat(){

}

string LandHabitat :: getTipe(char s){
    return tipe;
}
