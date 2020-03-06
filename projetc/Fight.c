#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Enemies.h"
#include "FightMenu.h"

void Fight(Player* Player, Enemy* Enemy,char* map, int coord){
    int level=EnemyLevel(&Player);
    Snail(&Player,&Enemy,level);
    while((*Enemy).hp>0){
        FightMenu(&Player,&Enemy,map,coord);
        if((*Player).energy<=0){
            printf("You couldn't get rid of this bug and are now exhausted.\n\n             G A M E   O V E R");
            main();
        }
    }

}
