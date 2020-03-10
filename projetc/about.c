#include <stdio.h>
#include <stdlib.h>
#include "story.h"
#include "menu.h"
#include "Map.h"

int about()
{
    color(11,0);
    printf("\n\n\nGame developed by Marie Gonzalez, Jad Salloum and Killian Moutinard.\n\n\n");
    color(15,0);

    printf("Enter the letter that corresponds to the direction of your choice when prompted to do so to move across the map.\n");
    printf("You might then either encounter an enemy or find an item.\n");
    printf("You can also find merchants in all corners of the map.\n\n");

    printf("When fighting an enemy, you will get the opportunity to choose between attacking, using an item or fleeing.\n");
    printf("You can only perform one action per turn.\n");
    printf("You will be able to choose how to attack or what item to use, but you won't gain any experience if you choose to flee.\n\n\n");
    printf("Here's a map of the game:\n\n");

    color(8,0);
    printf(" _ _ _ _ _ _ _ _ _ _ _ \n");
    EmptyLines();
    printf("| M  0  0  0  0  0  M |\n");
    EmptyLines();
    printf("| 0  0  0  0  0  0  0 |\n");
    EmptyLines();
    printf("| 0  0  0  0  0  0  0 |\n");
    EmptyLines();
    printf("| M  0  0  P  0  0  M |\n");
    printf("|_ _ _ _ _ _ _ _ _ _ _|\n\n\n");
    color(15,0);

    printf(" 1. Return to the menu \n 2. Start the game.\n\n");

    int choice;
    scanf(" %d",&choice);
    printf("\n");

    switch (choice)
    {
    case 1:
        menu();
    case 2:
        story();
    default:
        color(8,0);
        printf("Unknown choice. Please choose again.\n");
        color(15,0);
        about();
    }
}
