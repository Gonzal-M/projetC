#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Character.h"

int EnemyLevel(Player* Player){
    srand(time(NULL));
    int level=(*Player).level;
    if(level==1){           //Si le joueur est niveau 1 (min), l'enemi sera niveau 1 ou 2
        int r = rand()%2;
        level+=r;
    } else if (level==5){   //Si le joueur est niveau 5 (max), l'enemi sera niveau 4 ou 5
        int r = rand()%2;
        level-=r;
    } else {                //Sinon, l'enemi aura un niveau de moins, le même niveau ou un niveau de plus
    int r = rand()%3;
    level+=(r-1);
    }
    return level;
}
