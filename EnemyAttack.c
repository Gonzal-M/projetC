#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Enemies.h"
#include "FightMenu.h"

void EnemyAttack (Player* Player,Enemy* Enemy)
{
    int defense = (*Player).defense+(*Player).defenseboost;
    (*Player).energy -=(*Enemy).attack - defense;
}
