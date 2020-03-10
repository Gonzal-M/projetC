#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void story(Player* Player)
{
    printf("\nWhat's your name?\n");
    scanf(" %s",&(*Player).name);

    color(11,0);
    printf("\n       Welcome, ");
    color(9,0);
    printf("%s",(*Player).name);
    color(11,0);
    printf(".\n");
    //story

    color(8,0);
    printf("                          _______ \n");
    printf("        11/03/2020       | ___  o| \n");
    printf("         8:45 PM         |[_-_]_ | \n");
    printf("      ______________     |[_____]| \n");
    printf("     |.------------.|    |[_____]| \n");
    printf("     ||            ||    |[====o]| \n");
    printf("     ||  ");
    color(11,0);
    printf("HUNTING");
    color(8,0);
    printf("   ||    |[_.--_]| \n     ||  ");
    color(11,0);
    printf("PROGRAM");
    color(8,0);
    printf("   ||    |[_____]| \n");
    printf("     ||            ||    |      :| \n");
    printf("     ||____________||    |      :| \n");
    printf(" .==.|    ......    |.==.|      :| \n");
    printf(" |::| '-.________.-' |::||      :| \n");
    printf(" |''|  (__________)-.|''||______:| \n");
    printf(" '=='_.............._'=='`______ \n");
    printf("    /:::::::::::'':::\\`\\'-.-.  `\\ \n");
    printf("   /::=========.:.-:::\\ \\ \\--\\   \\ \n");
    printf("   \\`::::::::::::::::`/  \\ \\__)   \\ \n");
    printf("     -----------------    '========' \n\n");

    color(11,0);
    printf("  It's been 2 days and you have a headache and fever!\n");
    printf("  You are sick and you just slept for 24 hours... \n");
    printf("  You just woke up in your bed and as always you check, your phone... \n  ");
    color(4,0);
    printf("You have a programming project to hand in to Mr.Janin!\n");
    color(11,0);
    printf("  To begin, you have a cup of ");
    color(9,0);
    printf("coffee ");
    color(11,0);
    printf("on your desk, an old");
    color(9,0);
    printf(" Ball Mouse");
    color(11,0);
    printf(", and a crappy ");
    color(9,0);
    printf("TenKeyLess ");
    color(11,0);
    printf("keyboard... \n\n");
    printf("  While you program, you might encounter some ");
    color(4,0);
    printf("bugs");
    color(11,0);
    printf(", so watch out for them! \n");

    printf("     Press <Enter> if you are ready to begin.\n");

    while(getchar()!='\n'); //attend que l'utilisateur appuie sur la touche entrée
    getchar();
}
