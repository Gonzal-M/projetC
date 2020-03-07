#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Enemies.h"
#include "FightMenu.h"

void XPandMoney(Player* Player){
    //xp
    if((*Player).xp==100||(*Player).xp==300||(*Player).xp==600||(*Player).xp==900){ //si le joueur va monter de niveau
        (*Player).xp+=100;
        (*Player).level+=1;
        printf("You leveled up! You are now Level %d!\n",(*Player).level);
    }else{
        (*Player).xp+=100;
        printf("You now have %d Experience Points!\n",(*Player).xp);
    }

    //money
    if((*Player).level==1||(*Player).level==2){
        printf("You earned $5.\n");
        (*Player).money+=5;
    }else if((*Player).level==3||(*Player).level==4){
        printf("You earned $10.\n");
        (*Player).money+=10;
    }else{
        printf("You earned $15!\n");
        (*Player).money+=15;
    }

}

void Fight(Player* Player, Enemy* Enemy,char* map, int coord){
    while((*Enemy).hp>0){
        FightMenu(Player,Enemy,map,coord);
        if((*Player).energy<=0){
            printf("You couldn't get rid of this bug and are now exhausted.\n\n             G A M E   O V E R");
            main();
        }
    }
    XPandMoney(&Player);

}

