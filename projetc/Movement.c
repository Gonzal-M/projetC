#include <stdio.h>
#include <stdlib.h>
#include "Map.h"
#include "ImpossibleMovement.h"
#include "Save.h"
#include "Character.h"

char MoveChoice(){                              //Demande le choix du joueur
    printf("\n\nYou can enter <z> to go north, <q> to go west, <s> to go south, <d> to go east\n");
    printf("You can also enter <a> to save your game or <e> to exit the game without saving.\n\n");
    char choice;
    scanf(" %c",&choice);
    return choice;
}

void Movement(char* map, int coord,Player* Player)
{
    Map(map);
    char choice=MoveChoice();
    if(choice=='z'||choice=='Z'){
        if (0<=coord && coord<=6){             //Si le joueur est tout en haut de la map il ne peut pas monter
            ImpossibleMove(map,coord,&Player);
        } else if (coord==28 || coord==34){    //Si le joueur vient d'une case "marchant", la case redevient un M
            map[coord]='M';
            map[coord-7]='P';
        } else {
            map[coord]='O';
            map[coord-7]='P';
        }
    }
    else if(choice=='q'||choice=='Q'){
        if (coord%7==0){                       //Si le joueur est tout à gauche de la map il ne peut pas aller à gauche
            ImpossibleMove(map,coord,&Player);
        } else if (coord==6 || coord==34){    //Si le joueur vient d'une case "marchant", la case redevient un M
            map[coord]='M';
            map[coord-1]='P';
        } else {
            map[coord]='O';
            map[coord-1]='P';
        }
    }
    else if(choice=='s'||choice=='S'){
        if (28<=coord && coord<34){             //Si le joueur est tout en bas de la map il ne peut pas descendre
            ImpossibleMove(map,coord,&Player);
        } else if (coord==0 || coord==6){    //Si le joueur vient d'une case "marchant", la case redevient un M
            map[coord]='M';
            map[coord+7]='P';
        } else {
            map[coord]='O';
            map[coord+7]='P';
        }
    }
    else if(choice=='d'||choice=='D'){
        if ((coord+1)%7==0){                  //Si le joueur est tout à droite de la map il ne peut pas aller à droite
            ImpossibleMove(map,coord,&Player);
        } else if (coord==0 || coord==28){    //Si le joueur vient d'une case "marchant", la case redevient un M
            map[coord]='M';
            map[coord+1]='P';
        } else {
            map[coord]='O';
            map[coord+1]='P';
        }
    }
    else if(choice=='e'||choice=='E'){
        exit(0);
    }
    else if(choice=='a'||choice=='A'){
        Save(Player,coord);
        Movement(map,coord,&Player);
    }
    else{
        ImpossibleMove(map,coord,&Player);            //Si le joueur a entré une mauvaise lettre
    }
}
