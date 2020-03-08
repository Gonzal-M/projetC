#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void QuitOrContinue(){
    printf("\n\nYour game has been saved.\n");
    printf("1. Continue \n2. Exit the game\n");
    int quitchoice;
    scanf(" %d",&quitchoice);
    if(quitchoice==2){
        exit(0);
    } else if(!(quitchoice==1)){
        printf("Unknown choice. Please choose again.");
        QuitOrContinue();
    }
}

void Save(Player* Player, int coord){
    FILE* save;
    printf("Do you want to save in slot 1, 2 or 3?\n");
    printf("If you already have something saved in the selected save slot, it will be replaced.\n");
    int choice;
    scanf(" %d",&choice);
    if(choice==1){
        save=fopen("save1.txt","w");
        fprintf(save,"name:%s energy:%d attack:%d defense:%d money:%d xp:%d level:%d\n",(*Player).name,(*Player).energy,(*Player).attack,(*Player).defense,(*Player).money,(*Player).xp,(*Player).level);
        fprintf(save,"coffee:%d energydrink:%d ynovCourses:%d autodebug:%d numpad:%d mouseXtraKeys:%d macroKeypad:%d",(*Player).Inventory.coffee,(*Player).Inventory.energyDrink,(*Player).Inventory.ynovCourses,(*Player).Inventory.autodebug,(*Player).Inventory.numpad,(*Player).Inventory.mouseXtraKeys,(*Player).Inventory.macroKeypad);
        fprintf(save,"coord:%d",coord);
        fclose(save);
    }
    else if(choice==2){
        save=fopen("save2.txt","w");
        fprintf(save,"name:%s energy:%d attack:%d defense:%d money:%d xp:%d level:%d\n",(*Player).name,(*Player).energy,(*Player).attack,(*Player).defense,(*Player).money,(*Player).xp,(*Player).level);
        fprintf(save,"coffee:%d energydrink:%d ynovCourses:%d autodebug:%d numpad:%d mouseXtraKeys:%d macroKeypad:%d",(*Player).Inventory.coffee,(*Player).Inventory.energyDrink,(*Player).Inventory.ynovCourses,(*Player).Inventory.autodebug,(*Player).Inventory.numpad,(*Player).Inventory.mouseXtraKeys,(*Player).Inventory.macroKeypad);
        fprintf(save,"coord:%d",coord);
        fclose(save);
    }
    else if(choice==3){
        save=fopen("save3.txt","w");
        fprintf(save,"name:%s energy:%d attack:%d defense:%d money:%d xp:%d level:%d\n",(*Player).name,(*Player).energy,(*Player).attack,(*Player).defense,(*Player).money,(*Player).xp,(*Player).level);
        fprintf(save,"coffee:%d energydrink:%d ynovCourses:%d autodebug:%d numpad:%d mouseXtraKeys:%d macroKeypad:%d",(*Player).Inventory.coffee,(*Player).Inventory.energyDrink,(*Player).Inventory.ynovCourses,(*Player).Inventory.autodebug,(*Player).Inventory.numpad,(*Player).Inventory.mouseXtraKeys,(*Player).Inventory.macroKeypad);
        fprintf(save,"coord:%d",coord);
        fclose(save);
    }
    QuitOrContinue();
}
