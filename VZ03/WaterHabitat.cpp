#include "WaterHabitat.h"
#include <string>
using namespace std;

WaterHabitat :: WaterHabitat(int x,int y,char s) : Habitat(x,y,s){

}

WaterHabitat :: ~WaterHabitat(){

}

string WaterHabitat :: getTipe(char s){
    return tipe;
}
