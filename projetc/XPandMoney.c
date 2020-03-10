#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void XPandMoney(Player* Player){
    //xp
    color(10,0);
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
        printf("You earned $10.\n");
        (*Player).money+=10;
    }else if((*Player).level==3||(*Player).level==4){
        printf("You earned $15.\n");
        (*Player).money+=15;
    }else{
        printf("You earned $20!\n");
        (*Player).money+=20;
    }
    color(15,0);
}
