#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void PlayerSetup(Player* Player){
    (*Player).energy=100;
    (*Player).maxenergy=100;

    (*Player).attack=10;
    (*Player).attackboost=0;

    (*Player).defense=10;
    (*Player).defenseboost=0;

    (*Player).money=0;

    (*Player).xp=0;
    (*Player).level=1;


    (*Player).Inventory.coffee=1;
    (*Player).Inventory.energyDrink=0;

    (*Player).Inventory.ynovCourses=0;
    (*Player).Inventory.autodebug=0;

    (*Player).Inventory.numpad=0;
    (*Player).Inventory.mouseXtraKeys=0;
    (*Player).Inventory.macroKeypad=0;
}
