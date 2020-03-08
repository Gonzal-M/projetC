#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Enemies.h"
#include "FightMenu.h"

void MothAttack (Player* Player,Enemy* Enemy)
{
    int defense = (*Player).defense + (*Player).defenseboost; // On prend en compte la d�fense des items du joueur
    srand(time(NULL));

    int miss = rand()%10;

    if (miss == 1) // 1 chance sur 10 que l'ennemi rate l'attaque
    {
        printf("The enemy's attack failed! You take no damage! \n \n");
    }
    else
    {
        int crit = rand()%20;
        if (crit < 7) // 7 sur 20 que le boss fasse un coup critique
        {
            int att = (*Enemy).attack * 2;
            (*Player).energy -= ( att - defense );
            printf("The moth attacks you with a critical hit ! You take %d damage ! \n \n",( att - defense ));
            printf("You currently have %d energy left ! \n \n",(*Player).energy);
        }
        else
        {
            (*Player).energy -= ( (*Enemy).attack - defense );
            printf("The moth attacks you ! You take %d damage ! \n \n",( (*Enemy).attack - defense ));
            printf("You currently have %d energy left ! \n \n",(*Player).energy);
        }
    }
}
