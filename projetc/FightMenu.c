#include <stdio.h>
#include <stdlib.h>
#include "FightMenu.h"

void FightMenu(Player* Player,Enemy* Enemy,char* map, int coord)
{
    color(11,0);
    printf("\nWhat do you want to do now, %s?\n",(*Player).name);
    color(15,0);
    printf(" 1. Attack\n 2. Use Item\n 3. Flee\n\n");
    int choice;
    scanf(" %d",&choice);
    if (choice==1){
        int dmg=ChooseWeapon(Player,Enemy,map,coord);
        printf("You did %d damage!\n",dmg);
        if(!(dmg==0)){
            (*Enemy).hp-=dmg;
            printf("The enemy now has %d Health Points!\n",(*Enemy).hp);
        }
    } else if (choice ==2){
        UseItem(Player,&Enemy);
    } else if (choice ==3){
        color(12,0);
        printf("You ran away from the bug!\n");
        Day(Player,map);
    } else {
        color(8,0);
        printf("Unknown choice. Please choose again.\n");
        color(15,0);
        FightMenu(Player,&Enemy,map,coord);
    }
}

