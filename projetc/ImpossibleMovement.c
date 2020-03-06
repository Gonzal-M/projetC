#include <stdio.h>
#include <stdlib.h>
#include "Movement.h"
#include "Character.h"

void ImpossibleMove(char* map, int coord,Player* Player){      //En cas de mouvement impossible
    printf("This movement is impossible. Please choose another direction:\n");
    Movement(map,coord,&Player);
}
