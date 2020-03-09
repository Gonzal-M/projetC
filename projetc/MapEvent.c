#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Enemies.h"
#include "FightMenu.h"
#include "MerchantAndRecupWeapon.h"
#include "EnemyAttacks.h"
#include "XPandMoney.h"


void MapEvent(int coord,char* map,Player* Player){
    srand(time(NULL));
    if(coord==0||coord==6||coord==28||coord==34){    //Case marchant
        if ((*Player).money >= 0)
        {
            Merchant(Player);
        }
        else
        {
            color(12,0);
            printf("MERCHANT : What are you going to buy if you don't have any money?? \n");
            color(15,0);
        }
    }

    else if(coord==8||coord==12||coord==14||coord==16||coord==18||coord==20||coord==22||coord==24||coord==26||coord==30||coord==32){   //Case enemis
        int r = rand()%2;
        //Fight
        if(r==0){           //Snail
            Enemy snail;
            int level=EnemyLevel(Player);
            Snail(Player,&snail,level);
            while(snail.hp>0){
                Fight(Player,&snail,map,coord);
                SnailAttack(Player,&snail);
            }
            XPandMoney(Player);
        } else if(r==1){    //Spider
            Enemy spider;
            int level=EnemyLevel(Player);
            Spider(Player,&spider,level);
            while(spider.hp>0){
                Fight(Player,&spider,map,coord);
                SpiderAttack(Player,&spider);
            }
            XPandMoney(Player);
        }

    } else if(coord==10||coord==15||coord==19){    //Case arme
            RecupWeapon(Player,coord);
    }

    else if(coord==5||coord==7||coord==17||coord==27||coord==29){      //Case indice
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
    }

    else if (coord==3){       //Case boss
        Enemy moth;
        Moth(&moth);
        while(moth.hp>0){
            Fight(Player,&moth,map,coord);
            MothAttack(Player,&moth);
        }
        color(11,0);
        printf("Congratulations, %s! You beat the boss!\n\n",(*Player).name);
        printf("You handed in your program to be graded...\n");
        if((*Player).level==5){
            printf("Your result was... 20/20! You really put in the time and effort, you can be proud!\n");
        }else if((*Player).level==4){
            color(10,0);
            printf("Your result was... 15/20! You worked hard and it showed, good job!\n");
        }else if((*Player).level==3){
            color(14,0);
            printf("Your result was... 10/20! Maybe you should've started earlier, but that's a passing grade!\n");
        }else if((*Player).level==2){
            color(12,0);
            printf("Your result was... 5/20!.. That's a little disappointing considering how hard the boss was...\n");
        }else{
            color(4,0);
            printf("Your result was... 0/20!.. How did you beat the boss? Did you cheat?\n");
        }
        color(15,0);
        printf("\n\nYou can now press <enter> to go back to the main menu.");
        while(getchar()!='\n'); //attend que l'utilisateur appuie sur la touche entrée
        getchar();
        main();
    }

    else{       //cases "vides"
        color(11,0);
        int r = rand()%100;
        if(r<5){
            printf("You look out the window. The weather's absolutely terrible and you really don't feel like working today.\n\n");
        }else if(r<15){
            printf("You decide to look up a tutorial on YouTube to help with one of the features you're working on.\n");
            printf("You end up going down a YouTube rabbithole, watching everything from K-pop music videos to Minecraft let's plays.\n");
            printf("That was a terrible idea.\n\n");
        }else if(r<20){
            printf("... Something's weird...\nWhy is your code working perfectly? That is DEFINITELY NOT how coding normally goes.\n\n");
        }else if(r<50){
            printf("You decide to take a break to play a video game. It's now insanely late and you regret your decision.\nThis is going to be a long week.\n\n");
        }else if(r<70){
            printf("Your friend calls, asking if you wanted spend the day together. You told them thanks, but you have a lot of work\nto do and can't see them today.\n");
            printf("And then you went to watch that epic channel on Twitch called StormyTV_Live.\n\n");
        }else if(r<80){
            printf("You feel like today is a good day to treat yourself and decide to bake a cake.\n");
            printf("And then you ate everything in one go.\n\n");
        }else if(r<90){
            printf("As soon as you open your project, you remember all the bugs you still had to fix from the previous day. \nYou start questioning your skills and end up having an existential crisis. Today was not a productive day.\n\n");
        }else{
            printf("You look up a solution for your problem on the Internet. Turns out it was extremely stupid.\nYou don't want to work anymore, it's a stupid project anyway.\n\n");
        }
        color(15,0);

    }
}
