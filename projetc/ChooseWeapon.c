#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "FightMenu.h"

int ChooseWeapon(Player* Player,Enemy* Enemy,char* map,int coord){
    srand(time(NULL));
    printf("What weapon do you want to use?\n");

    printf("1. Ball Mouse    -   You feel like the ball might break any second. Does 7 damage.\n");
    printf("2. TenKeyLess    -   The lack of numpad leads to typos. Does 10 damage. Higher miss chances.\n\n");

    if((*Player).Inventory.numpad==1){
        printf("3. Numpad        -   Plug it in your keyboard! Does 15 damage. Low miss chances!\n");
    }else{
        printf("3. Numpad        -   You don't have this item. You might be able to find them somewhere!\n");
    }

    if((*Player).Inventory.mouseXtraKeys==1){
        printf("4. Optic. Mouse  -   It has two extra buttons on the side! Does 17 damage.\n");
    }else{
        printf("4. Optic. Mouse  -   You don't have this item. You might be able to find them somewhere!\n");
    }

    if((*Player).Inventory.macroKeypad==1){
        printf("5. Macro Keypad  -   So much power! Does 20 damage. High chances for a critical hit.\n");
    }else{
        printf("5. Macro Keypad  -   You don't have this item. You might be able to find them somewhere!\n\n");
    }

    printf("0. Return to the previous menu.\n\n");

    //calcul des dégâts (coups critiques, coups ratés, coups normaux)

    int dmg=(*Player).attack+(*Player).attackboost;
    int choice;
    int miss;
    int cc;
    scanf("%d",&choice);

    if(choice==1){
        miss = rand()%10;
        if(miss<8){             //2 chances sur 10 de rater
            dmg+=7;
            cc=rand()%20;
            if(cc==19){         //1 chance sur 20 pour CC
                printf("That was a critical hit!\n");
                dmg+=7;
            }
        }else{
            printf("Your hit missed!\n");
            dmg=0;
        }
    }

    else if (choice==2){
        miss = rand()%2;
        if(miss==0){              //1 chance sur 2 de rater
            dmg+=10;
            cc=rand()%40;
            if(cc==39){         //1 chance sur 40 pour CC
                printf("That was a critical hit!\n");
                dmg+=10;
            }
        }else{
            printf("Your hit missed!\n");
            dmg=0;
        }
    }

    else if(choice==3 && (*Player).Inventory.numpad==1){
        miss = rand()%20;
        if(miss<19){             //1 chances sur 20 de rater
            dmg+=15;
            cc=rand()%20;
            if(cc==0){         //1 chance sur 20 pour CC
                printf("That was a critical hit!\n");
                dmg+=15;
            }
        }else{
            printf("Your hit missed!\n");
            dmg=0;
        }
    }

    else if(choice==4 && (*Player).Inventory.mouseXtraKeys==1){
        miss = rand()%5;
        if(miss<4){             //1 chances sur 5 de rater
            dmg+=17;
            cc=rand()%10;
            if(cc<8){         //2 chance sur 10 pour CC
                printf("That was a critical hit!\n");
                dmg+=17;
            }
        }else{
            printf("Your hit missed!\n");
            dmg=0;
        }
    }

    else if(choice==5 && (*Player).Inventory.macroKeypad==1){
        miss=rand()%100;
        if(miss<99){            //1 chance sur 100 de rater
            dmg+=20;
            cc = rand()%4;
            if(cc<4){            //3 chances sur 4 pour CC
            dmg+=20;
            }
        }else{
            printf("Your hit missed!\n");
            dmg=0;
        }
    }

    else if(choice==0){         //retour au menu précédent
        FightMenu(&Player,&Enemy,map,coord);
    }
    else{
        printf("Unknown choice. Please choose again.\n");
        ChooseWeapon(&Player,&Enemy,map,coord);
    }
    return dmg;
}
