#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Enemies.h"
#include "FightMenu.h"


void MapEvent(int coord,char* map,Player* Player){
    srand(time(NULL));
    if(coord==0||coord==6||coord==28||coord==34){    //Case marchant

    }

    else if(coord==8||coord==12||coord==14||coord==16||coord==18||coord==20||coord==22||coord==24||coord==26||coord==30||coord==32){   //Case enemis
        int r = rand()%2;
        //Fight
        if(r==0){           //Snail
            Enemy snail;
            Fight(&Player,&snail,map,coord);
        } else if(r==1){    //Spider
            Enemy spider;
            Fight(&Player,&spider,map,coord);
        }
        //xp gain
        if((*Player).xp==100||(*Player).xp==300||(*Player).xp==600||(*Player).xp==900){ //si le joueur va monter de niveau
            (*Player).xp+=100;
            (*Player).level+=1;
            printf("You leveled up! You are now Level %d!\n",(*Player).level);
        }else{
            (*Player).xp+=100;
            printf("You now have %d Experience Points!\n",(*Player).xp);
        }

    } else if(coord==10||coord==15||coord==19){    //Case arme

    } else if(coord==5||coord==7||coord==17||coord==27||coord==29){      //Case indice
        if(coord==5){
            printf("");
        }else if (coord==7){
            printf("");
        }else if(coord==17){
            printf("");
        }else if(coord==27){
            printf("");
        }else{
            printf("");
        }
    } else if (coord==3){       //Case boss
        Enemy moth;
        Fight(&Player,&moth,map,coord);
        printf("Congratulations, %s! You beat the boss!\n\n",(*Player).name);
        printf("You handed in your program to be graded.\n");
        if((*Player).level==5){
            printf("Your result was... 20/20! You really put in the time and effort, you can be proud!\n");
        }else if((*Player).level==4){
            printf("Your result was... 15/20! You worked hard and it showed, good job!\n");
        }else if((*Player).level==3){
            printf("Your result was... 10/20! Maybe you should've started earlier, but that's a passing grade!\n");
        }else if((*Player).level==2){
            printf("Your result was... 5/20!.. That's a little disappointing considering how hard the boss was...\n");
        }else{
            printf("Your result was... 0/20!.. How did you beat the boss? Did you cheat?\n");
        }
        printf("\n\nYou can now press <enter> to go back to the main menu.");
        while(getchar()!='\n'); //attend que l'utilisateur appuie sur la touche entrée
        getchar();
        main();
    }
}
