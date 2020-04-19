#include "appData.h"
#include "gamut.h"


ExtGamut gamuts[100];

ExtGamut* appData::newGamut(){

    for (int i = 0; i < 100; i++){
        if (gamuts[i].isEmpty){
            gamuts[i].isEmpty = false;
            gamuts[i].index = i;
            return &gamuts[i];
        }
    }

    return nullptr;

}

bool appData::killGamut(ExtGamut *pointer){
    pointer->isEmpty = true;
    return true;
}
