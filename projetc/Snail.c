#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void Snail(Player* Player, Enemy* snail, int level){
    color(2,0);
    (*snail).level=level;
    (*snail).hp=100+((level-1)*25);
    (*snail).attack=5+((level-1)*3);       //attaque basse
    (*snail).defense=15+((level-1)*5);     //défense haute

    printf("            /^\\    /^\\ \n");
    printf("           {  O}  {  O}\n");
    printf("            \\ /    \\ /\n");
    printf("            //     //       _------_                  Ugh, a Snail level %d attacked!\n",level);
    printf("           //     //     ./~        ~-_\n");
    printf("          / ~----~/     /              \\ \n");
    printf("        /         :   ./       _---_    ~-\n");
    printf("       |  \\________)  :       /~     ~\\   |\n");
    printf("       |        /    |      |  :~~\\  |   |\n");
    printf("       |       |     |      |  \\___-~    |\n");
    printf("       |        \\ __/`\\______\\.        ./\n");
    printf("        \\                     ~-______-~\.\n");
    printf("        .|                                ~-_\n");
    printf("       /_____________________________________~~____\n\n");
    color(15,0);
}
