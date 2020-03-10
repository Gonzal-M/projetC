#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Enemies.h"
#include "FightMenu.h"

void SnailAttack (Player* Player,Enemy* Enemy)
{
    int defense = (*Player).defense + (*Player).defenseboost; // On prend en compte la défense des items du joueur
    srand(time(NULL));

    int miss = rand()%20;

    if (miss == 1) // 1 chance sur 20 que l'escargot rate l'attaque
    {
        printf("The enemy's attack failed! You take no damage! \n \n");
    }
    else
    {
        int crit = rand()%20;
        if (crit == 1) // 1 sur 20 que l'escargot fasse un coup critique
        {
            int att = (*Enemy).attack * 2;
            (*Player).energy -= ( att - defense );
            printf("The snail attacks you with a critical hit ! You take %d damage ! \n \n",( att - defense ));
            printf("You currently have %d energy left ! \n \n",(*Player).energy);
        }
        else
        {
            (*Player).energy -= ( (*Enemy).attack - defense );
            printf("The snail attacks you ! You take %d damage ! \n \n",( (*Enemy).attack - defense ));
            printf("You currently have %d energy left ! \n \n",(*Player).energy);
        }
    }
}
