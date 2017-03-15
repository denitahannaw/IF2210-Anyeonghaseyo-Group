
#include "Exit.h"
#include <string>
using namespace std;

Exit :: Exit(int x,int y,char s) : Road(x,y,s){

}

string Exit :: getTipe(){
    return tipe;
}
