#include <stdio.h>
#include <stdlib.h>
#include "Movement.h"
#include "Character.h"

void ImpossibleMove(char* map, int coord,Player* Player){      //En cas de mouvement impossible
    color(8,0);
    printf("This movement is impossible. Please choose another direction:\n");
    color(15,0);
    Movement(map,coord,&Player);
}
