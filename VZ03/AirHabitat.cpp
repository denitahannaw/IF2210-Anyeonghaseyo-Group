
#include "AirHabitat.h"

// cctor 
AirHabitat :: AirHabitat(int x,int y,char s) : Habitat(x,y,s){

}

// AirHabitat :: ~AirHabitat(){

// }

// get tipe dari cell
string AirHabitat :: getTipe(){
    return tipe;
}
