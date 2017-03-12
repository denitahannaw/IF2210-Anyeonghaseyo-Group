#include "WaterHabitat.h"

WaterHabitat :: WaterHabitat(int x,int y,char s) : Habitat(x,y,s){

}

// WaterHabitat :: ~WaterHabitat(){

// }

string WaterHabitat :: getTipe(){
    return tipe;
}
