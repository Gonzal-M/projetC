#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "FightMenu.h"

int HitMissed(int dmg){
    color(4,0);
    printf("\nYour hit missed!\n");
    color(15,0);
    return 0;
}
int CriticalHit(int dmg){
    color(10,0);
    printf("\nThat was a critical hit!\n");
    color(15,0);
    dmg*=2;
    return dmg;
}

int ChooseWeapon(Player* Player,Enemy* Enemy,char* map,int coord){
    srand(time(NULL));
    color(11,0);
    printf("\nWhat weapon do you want to use?\n");
    color(15,0);

    printf("1. Ball Mouse    -   You feel like the ball might break any second. Does 7 damage.\n");
    printf("2. TenKeyLess    -   The lack of numpad leads to typos. Does 10 damage. Higher miss chances.\n\n");

    if((*Player).Inventory.numpad==1){
        color(15,0);
        printf("3. Numpad        -   Plug it in your keyboard! Does 15 damage. Low miss chances!\n");
    }else{
        color(8,0);
        printf("3. Numpad        -   You don't have this item. You might be able to find them somewhere!\n");
    }

    if((*Player).Inventory.mouseXtraKeys==1){
        color(15,0);
        printf("4. Optic. Mouse  -   It has two extra buttons on the side! Does 17 damage.\n");
    }else{
        color(8,0);
        printf("4. Optic. Mouse  -   You don't have this item. You might be able to find them somewhere!\n");
    }

    if((*Player).Inventory.macroKeypad==1){
        color(15,0);
        printf("5. Macro Keypad  -   So much power! Does 20 damage. High chances for a critical hit.\n");
    }else{
        color(8,0);
        printf("5. Macro Keypad  -   You don't have this item. You might be able to find them somewhere!\n\n");
    }
    color(15,0);
    printf("0. Return to the previous menu.\n\n");

    //calcul des d�g�ts (coups critiques, coups rat�s, coups normaux)
    int dmg=(*Player).attack+(*Player).attackboost;
    int choice;
    int miss;
    int cc;
    scanf(" %d",&choice);

    if(choice==1){
        miss = rand()%10;
        if(miss<8){             //2 chances sur 10 de rater
            dmg+=7;
            cc=rand()%20;
            if(cc==19){         //1 chance sur 20 pour CC
                dmg=CriticalHit(dmg);
            }
        }else{
            dmg=HitMissed(dmg);
        }
    }

    else if (choice==2){
        miss = rand()%2;
        if(miss==0){              //1 chance sur 2 de rater
            dmg+=10;
            cc=rand()%40;
            if(cc==39){         //1 chance sur 40 pour CC
                dmg=CriticalHit(dmg);
            }
        }else{
            dmg=HitMissed(dmg);
        }
    }

    else if(choice==3 && (*Player).Inventory.numpad==1){
        miss = rand()%20;
        if(miss<19){             //1 chances sur 20 de rater
            dmg+=15;
            cc=rand()%20;
            if(cc==0){         //1 chance sur 20 pour CC
                dmg=CriticalHit(dmg);
            }
        }else{
            dmg=HitMissed(dmg);
        }
    }

    else if(choice==4 && (*Player).Inventory.mouseXtraKeys==1){
        miss = rand()%5;
        if(miss<4){             //1 chances sur 5 de rater
            dmg+=17;
            cc=rand()%10;
            if(cc<8){         //2 chance sur 10 pour CC
                dmg=CriticalHit(dmg);
            }
        }else{
            dmg=HitMissed(dmg);
        }
    }

    else if(choice==5 && (*Player).Inventory.macroKeypad==1){
        miss=rand()%100;
        if(miss<99){            //1 chance sur 100 de rater
            dmg+=20;
            cc = rand()%4;
            if(cc<4){            //3 chances sur 4 pour CC
                dmg=CriticalHit(dmg);
            }
        }else{
            dmg=HitMissed(dmg);
        }
    }

    else if(choice==0){         //retour au menu pr�c�dent
        FightMenu(&Player,&Enemy,map,coord);
    }
    else{
        color(8,0);
        printf("Unknown choice. Please choose again.\n");
        ChooseWeapon(&Player,&Enemy,map,coord);
    }
    color(15,0);

    return dmg;
}
