#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void RecupWeapon(Player* Player, int coord)
{
    if (coord == 10){
        //clavier macro
        if ((*Player).Inventory.macroKeypad == 0){
            printf("You found a weapon you don't already have. \n");
            printf("Guess what! You just found the Macro Keypad... \n");
            printf("You can pick it up and become the best developer in this game! \n");
            (*Player).Inventory.macroKeypad = 1;
            printf("In fact, this weapon is the most powerful in GAME NAME!\n");
        } else if ((*Player).Inventory.macroKeypad == 1){
            printf("You already have this weapon! You can use it to destroy the world!!! \n");
            printf("Remember, you found it here. \n");
        }
    } else if (coord == 15){
        //pavé numérique
        if ((*Player).Inventory.numpad == 0){
            printf("You found a weapon you don't already have. \n");
            printf("Guess what ! You just found the Numpad... \n");
            printf("You can pick it up and improve your Attack against enemies ! \n");
            (*Player).Inventory.numpad = 1;
            printf("I hope you will find the best weapon in the game to kill the boss. \n");
            printf("You are so close to finding the best weapon! Good Luck! \n");
        } else if ((*Player).Inventory.numpad == 1){
            printf("Congratulations! \n");
            printf("You just found a new weapon!!!\n... \n");
            printf("This is a joke silly!\n");
            printf("Come on ! Don't be so sad... \n");
            printf("Remember you already found the Numpad here! \n");
        }

    } else if (coord == 19){
        //mouseXtraKeys
        if ((*Player).Inventory.mouseXtraKeys == 0){
            printf("You found a beautiful weapon you didn't have yet! \n");
            printf("You found a Mouse with Extra Keys!\n");
            printf("You can pick it up to improve your attack against enemies! \n");
            (*Player).Inventory.mouseXtraKeys = 1;
            printf("Be sure to have all the weapons you need to kill the boss. \n");
        } else if ((*Player).Inventory.mouseXtraKeys == 1){
            printf("You already have the Mouse with Extra Keys! \n");
            printf("Remember, you already found it here... \n");
        }

    }
}

