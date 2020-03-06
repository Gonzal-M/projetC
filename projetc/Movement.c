#include <stdio.h>
#include <stdlib.h>

char MoveChoice(){                              //Demande le choix du joueur
    printf("\n\nYou can enter <z> to go north, <q> to go west, <s> to go south, <d> to go east or <e> to exit the game.\n\n");
    char choice;
    scanf(" %c",&choice);
    return choice;
}
char ImpossibleMove(char* map, int coord){      //En cas de mouvement impossible
    printf("This movement is impossible. Please choose another direction:\n");
    Movement(map,coord);
}

void Movement(char* map, int coord)
{
    Map(map);
    char choice=MoveChoice();
    if(choice=='z'||choice=='Z'){
        if (0<=coord && coord<=6){             //Si le joueur est tout en haut de la map il ne peut pas monter
            ImpossibleMove(map,coord);
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
            ImpossibleMove(map,coord);
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
            ImpossibleMove(map,coord);
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
            ImpossibleMove(map,coord);
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
    else{
        ImpossibleMove(map,coord);            //Si le joueur a entré une mauvaise lettre
    }
}
