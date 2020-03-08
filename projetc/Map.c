#include <stdio.h>
#include <stdlib.h>

//Optimisation de l'affichage de la map
void EmptyLines(){
    printf("|                     |\n");
}
void FullLines(char* map){
    printf("| %c  %c  %c  %c  %c  %c  %c |\n",*(map),*(map+1),*(map+2),*(map+3),*(map+4),*(map+5),*(map+6));
}

//Utiliser cette fonction pour afficher la map
void Map(char* map)
{
    color(8,0);
    printf(" _ _ _ _ _ _ _ _ _ _ _\n");
    EmptyLines();

    FullLines(map);
    EmptyLines();
    FullLines(map+7);
    EmptyLines();
    FullLines(map+14);
    EmptyLines();
    FullLines(map+21);
    EmptyLines();
    FullLines(map+28);
    printf("|_ _ _ _ _ _ _ _ _ _ _|\n");
    color(15,0);
}
