
#include "Exit.h"
#include <string>
using namespace std;

Exit :: Exit(int x,int y,char s) : Road(x,y,s){

}

Exit :: ~Exit(){

}

Exit :: getTipe(char s){
    return tipe;
}
