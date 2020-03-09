#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void story(Player* Player)
{
    printf("What's your name?\n");
    scanf(" %s",&(*Player).name);

    printf("\nWelcome, ");
    color(11,0);
    printf("%s",(*Player).name);
    color(15,0);
    printf(".\n");
    //story

    printf("               __\n");
    printf("    ..=====.. |==|\n");
    printf("    ||     || |= |\n");
    printf(" _  ||     || |^*| _\n");
    printf("|=| o=,===,=o |__||=|\n");
    printf("|_|  _______      |_|\n");
    printf("    [=======]  ()\n\n");

    printf("Press <Enter> if you are ready to begin.\n");

    while(getchar()!='\n'); //attend que l'utilisateur appuie sur la touche entrée
    getchar();
}
