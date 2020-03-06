#include <stdio.h>
#include <stdlib.h>
#include "about.h"
#include "story.h"
#include "Character.h"
int menu()
{
    printf("\n\n                 G A M E   N A M E\n");
    printf("                   ~ MAIN MENU ~ \n\n");
    printf(" 1. Create New Game \n 2. Load Save Game \n 3. About \n 4. Exit\n\n");
    int choice;
    scanf("%d",&choice);
    printf("\n");
    Player Player;
    char map[35]={'M','O','O','O','O','O','M','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','M','O','O','P','O','O','M'};

    switch (choice){
    case 1:
        story(&Player);
        PlayerSetup(&Player);
    case 2:
        break;
    case 3:
        about();
    case 4:
        exit(0);
    default:
        printf("Unknown choice. Please choose again.");
        menu();
    }

    return 0;
}
