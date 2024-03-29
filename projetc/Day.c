#include <stdio.h>
#include <stdlib.h>
#include "Character.h"
#include "SearchP.h"
#include "MapEvent.h"
#include "Movement.h"

void Day(Player* Player,char* map){
    for(int i=1;0<i;i++)        //continue jusqu'� l'arr�t manuel du jeu
    {
        color(11,0);
        printf("\n\nGood morning %s, today is a new day! What will you do?\n",(*Player).name);
        color(15,0);
        int coord=SearchP(map);
        Movement(map,coord,Player);
        int newcoord=SearchP(map);
        MapEvent(newcoord,map,Player);
    }
}
