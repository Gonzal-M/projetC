#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void story(Player* Player)
{
    printf("What's your name?\n");
    scanf(" %s",&(*Player).name);

    printf("\nWelcome, %s.\n",(*Player).name);
    //story

    printf("               __\n");
    printf("    ..=====.. |==|\n");
    printf("    ||     || |= |\n");
    printf(" _  ||     || |^*| _\n");
    printf("|=| o=,===,=o |__||=|\n");
    printf("|_|  _______      |_|\n");
    printf("    [=======]  ()\n\n");

    printf("Press <Enter> if you are ready to begin, %s.\n",(*Player).name);

    while(getchar()!='\n'); //attend que l'utilisateur appuie sur la touche entrée
    getchar();
}
