#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void UseItem(Player* Player,Enemy* Enemy){
    printf("Here's your inventory! Select the number of the item you want to use or enter <0> to go back.\n\n");
    printf("1. Coffee           %d      +20 Energy!\n",(*Player).Inventory.coffee);
    printf("2. Energy Drink     %d      +50 Energy!\n\n",(*Player).Inventory.energyDrink);
    printf("3. Ynov Course      %d      +10 Attack!\n",(*Player).Inventory.ynovCourses);
    printf("4. Auto-Debug       %d      +10 Defense!\n\n",(*Player).Inventory.autodebug);

    int choice;
    scanf("%d",&choice);

    if(choice==1 && (*Player).Inventory.coffee>0){
        (*Player).Inventory.coffee-=1;
        if((*Player).energy>=((*Player).maxenergy-20)){
            (*Player).energy=(*Player).maxenergy;
        }else{
            (*Player).energy+=20;
        }
        printf("You drank Coffee and feel a little bit better.\n");
    }
    else if(choice==2&& (*Player).Inventory.energyDrink>0){
        (*Player).Inventory.energyDrink-=1;
        if((*Player).energy>=((*Player).maxenergy-50)){
            (*Player).energy=(*Player).maxenergy;
        }else{
            (*Player).energy+=50;
        }
        printf("You drank an Energy Drink and feel full of Energy!\n");
    }

    else if(choice==3 && (*Player).Inventory.ynovCourses>0){
        (*Player).attackboost+=10;
        printf("You went to M. Janin's class and studied hard. You feel more prepared.\n");
    }
    else if(choice==4&& (*Player).Inventory.autodebug>0){
        (*Player).defenseboost+=10;
        printf("You felt lazy and decided to use your Auto-Debug subscription. Bugs better watch out!\n");
    }

    else if(choice==0){
        FightMenu(&Player,&Enemy);
    }else{
        printf("Unknown choice. Please choose again.\n");
        UseItem(&Player,&Enemy);
    }
}
