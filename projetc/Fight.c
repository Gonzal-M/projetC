#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Enemies.h"
#include "FightMenu.h"
#include "main.h"

void Fight(Player* Player, Enemy* Enemy,char* map, int coord){
    FightMenu(Player,Enemy,map,coord);
    if((*Player).energy<=0){
        color(4,0);
        printf("You couldn't get rid of this bug and are now exhausted.\n\n             G A M E   O V E R");
        color(15,0);
        main();
    }

}

