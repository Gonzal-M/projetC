#include <stdio.h>
#include <stdlib.h>
#include "Character.h"
#include "SearchP.h"
#include "MapEvent.h"
#include "Movement.h"

void Day(Player* Player,char* map){
    for(int i=1;i<=30;i++) //30 = nombre de jours
    {
        printf("Good morning %s, this is day #%d.\n",(*Player).name,i);
        int coord=SearchP(map);
        Movement(map,coord,&Player);
        int newcoord=SearchP(map);
        MapEvent(newcoord,map,&Player);
    }
}
