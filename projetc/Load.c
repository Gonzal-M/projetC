#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

int Load(Player* Player){
    FILE* load;
    int coord;
    printf("Which save do you want to load: 1, 2 or 3?\n");
    printf("You can also enter <0> to return to the menu.\n");
    int choice;
    scanf(" %d",&choice);
    if(choice==1 && !(load=fopen("save1.txt", "r") == NULL)){
        load=fopen("save1.txt","r");
        fscanf(load,"name:%s energy:%d attack:%d defense:%d money:%d xp:%d level:%d\n",&(*Player).name,&(*Player).energy,&(*Player).attack,&(*Player).defense,&(*Player).money,&(*Player).xp,&(*Player).level);
        fscanf(load,"coffee:%d energydrink:%d ynovCourses:%d autodebug:%d numpad:%d mouseXtraKeys:%d macroKeypad:%d",&(*Player).Inventory.coffee,&(*Player).Inventory.energyDrink,&(*Player).Inventory.ynovCourses,&(*Player).Inventory.autodebug,&(*Player).Inventory.numpad,&(*Player).Inventory.mouseXtraKeys,&(*Player).Inventory.macroKeypad);
        fscanf(load,"coord:%d",&coord);
        fclose(load);
    }else if(choice==2 && !(load=fopen("save2.txt", "r") == NULL)){
        load=fopen("save2.txt","r");
        fscanf(load,"name:%s energy:%d attack:%d defense:%d money:%d xp:%d level:%d\n",&(*Player).name,&(*Player).energy,&(*Player).attack,&(*Player).defense,&(*Player).money,&(*Player).xp,&(*Player).level);
        fscanf(load,"coffee:%d energydrink:%d ynovCourses:%d autodebug:%d numpad:%d mouseXtraKeys:%d macroKeypad:%d",&(*Player).Inventory.coffee,&(*Player).Inventory.energyDrink,&(*Player).Inventory.ynovCourses,&(*Player).Inventory.autodebug,&(*Player).Inventory.numpad,&(*Player).Inventory.mouseXtraKeys,&(*Player).Inventory.macroKeypad);
        fscanf(load,"coord:%d",&coord);
        fclose(load);
    }else if(choice==3 && !(load=fopen("save3.txt", "r") == NULL)){
        load=fopen("save3.txt","r");
        fscanf(load,"name:%s energy:%d attack:%d defense:%d money:%d xp:%d level:%d\n",&(*Player).name,&(*Player).energy,&(*Player).attack,&(*Player).defense,&(*Player).money,&(*Player).xp,&(*Player).level);
        fscanf(load,"coffee:%d energydrink:%d ynovCourses:%d autodebug:%d numpad:%d mouseXtraKeys:%d macroKeypad:%d",&(*Player).Inventory.coffee,&(*Player).Inventory.energyDrink,&(*Player).Inventory.ynovCourses,&(*Player).Inventory.autodebug,&(*Player).Inventory.numpad,&(*Player).Inventory.mouseXtraKeys,&(*Player).Inventory.macroKeypad);
        fscanf(load,"coord:%d",&coord);
        fclose(load);
    }else if(choice==0){
        menu();
    }
    else{
        printf("Either your choice was unknown or the save you selected was empty. Please choose again.\n");
        Load(&Player);
    }
    return coord;
}




