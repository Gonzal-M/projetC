#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void story(Player* Player)
{
    printf("What's your name?\n");
    scanf(" %s",&(*Player).name);

    //story

    printf("                          _______ \n");
    printf("        11/03/2020       | ___  o| \n");
    printf("         8:45 PM         |[_-_]_ | \n");
    printf("      ______________     |[_____]| \n");
    printf("     |.------------.|    |[_____]| \n");
    printf("     ||            ||    |[====o]| \n");
    printf("     ||  HUNTING   ||    |[_.--_]| \n");
    printf("     ||  PROGRAM   ||    |[_____]| \n");
    printf("     ||            ||    |      :| \n");
    printf("     ||____________||    |      :| \n");
    printf(" .==.|""  ......      |.==.|      :| \n");
    printf(" |::| '-.________.-' |::||      :| \n");
    printf(" |''|  (__________)-.|''||______:| \n");
    printf(" `""`_.............._\''`______ \n");
    printf("    /:::::::::::'':::\`;'-.-.  `\ \n");
    printf("   /::=========.:.-:::\ \ \--\   \ \n");
    printf("   \`""""""""""""""""`/  \ \__)   \ \n");
    printf("    `""""""""""""""""`    '========' \n");

    printf("It's been 2 days you have a headache and fever ! \n");
    printf("You are sick and you just fell asleep for 24 hours ... \n");
    printf("You just woke up in your bed and as always you check your cell phone ... \n");
    printf(" \n");
    printf("You have a project of programming to give back to Mr. Janin !!! \n");
    printf("To begin, you have on your desk one coffee, a ball mouse, a TenKeyLess and 5$ ... \n");
    printf(" \n");
    printf("When you program, you will be able to meet some bugs. \n");
    printf("The boss is the day of the test so make sure you ready to beat him ! \n");
    printf(" \n");
    printf("Press <Enter> if you are ready to begin, %s.\n",(*Player).name);

    while(getchar()!='\n'); //attend que l'utilisateur appuie sur la touche entrée
    getchar();
}
