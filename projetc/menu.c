#include <stdio.h>
#include <stdlib.h>
#include "AboutStory.h"
#include "Character.h"
#include "Day.h"
#include "PlayerSetup.h"
#include "Load.h"

void menu(){
    color(11,0);
    printf("\n\n                             H U N T I N G   P R O G R A M\n\n");
    color(7,0);
    printf("                                     ~ MAIN MENU ~ \n\n\n\n\n");
    color(11,0);
    printf("     1. Create New Game \n\n     2. Load Save Game \n\n     3. About \n\n     4. Exit\n\n\n");
    color(15,0);
    int choice;
    scanf(" %d",&choice);
    printf("\n");

    Player Player;
    char map[35]={'M','O','O','O','O','O','M','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','M','O','O','P','O','O','M'};
    int coord=31;
    switch (choice){
    case 1:
        story(&Player);
        PlayerSetup(&Player);
        Day(&Player,map);
    case 2:
        coord=Load(&Player);
        map[31]='O';
        map[coord]='P';
        Day(&Player,map);
    case 3:
        about();
    case 4:
        exit(0);
    default:
        color(8,0);
        printf("Unknown choice. Please choose again.\n");
        color(15,0);
        menu();
    }
}
