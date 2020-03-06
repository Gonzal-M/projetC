#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void Spider(Player* Player,Enemy* spider, int level){
    (*spider).level=level;
    (*spider).hp=100+((level-1)*25);
    (*spider).attack=15+((level-1)*5);     //attaque haute
    (*spider).defense=5+((level-1)*3);     //défense basse

    printf("           ____                      , \n");
    printf("          /---.'.__             ____// \n");
    printf("               '--.\\           /.---' \n");
    printf("          _______  \\\\         // \n");
    printf("        /.------.\\  \\|      .'/  ______               Quick! It's a Spider level %d!\n",level);
    printf("       //  ___  \\ \\ ||/|\\  //  _/_----.\\__ \n");
    printf("      |/  /.-.\\  \\ \\:|< >|// _/.'..\\   '--' \n");
    printf("         //   \\'. | \\'.|.'/ /_/ /  \\\\ \n");
    printf("        //     \\ \\_\\/' ' ~\\-'.-'    \\\\ \n");
    printf("       //       '-._| :H: |'-.__     \\\\ \n");
    printf("      //           (/'==='\\)'-._\\     || \n");
    printf("      ||                        \\\\    \\| \n");
    printf("      ||                         \\\\    ' \n");
    printf("      |/                          \\\\ \n");
    printf("                                  || \n");
    printf("                                  || \n");
    printf("                                   \\\\ \n");
    printf("                                    ' \n");
}
