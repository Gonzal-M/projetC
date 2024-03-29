#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Enemies.h"
#include "FightMenu.h"

void SpiderAttack (Player* Player,Enemy* Enemy)
{
    int defense = (*Player).defense + (*Player).defenseboost; // On prend en compte la d�fense des items du joueur
    srand(time(NULL));

    int miss = rand()%20;

    if ( ((*Enemy).attack - defense) > 0)
    {
        if (miss < 6) // 6 chance sur 20 que l'araign�e rate l'attaque
        {
            printf("The enemy's attack failed! You take no damage! \n \n");
        }
        else
        {
            int crit = rand()%10;
            if (crit < 4) // 4 sur 10 que l'araign�e fasse un coup critique
            {
                int att = (*Enemy).attack * 2;
                (*Player).energy -= ( att - defense );
                color(4,0);
                printf("The spider attacks you with a critical hit ! You take %d damage ! \n \n",( att - defense ));
                color(15,0);
                printf("You currently have %d energy left ! \n \n",(*Player).energy);
            }
            else
            {
                (*Player).energy -= ( (*Enemy).attack - defense );
                color(12,0);
                printf("The spider attacks you ! You take %d damage ! \n \n",( (*Enemy).attack - defense ));
                color(15,0);
                printf("You currently have %d energy left ! \n \n",(*Player).energy);
            }
        }
    }
    else
    {
        printf("You have so much defense that the enemy can't hurt you! You take 0 damage! \n \n");
    }
}
