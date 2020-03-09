#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void Moth(Enemy* moth){            //boss
    color(4,0);
    (*moth).level=5;
    (*moth).hp=500;
    (*moth).attack=45;
    (*moth).defense=45;

    printf("      '-.       ,   ,       .-' \n");
    printf("         \\    _.-'''-._    / \n");
    printf("          \\  (_).---.(_)  / \n");
    printf("           '-/         \\-' \n");
    printf("             \\__.---.__/                              Careful! It's a... Moth? It's level 5 but...\n");
    printf("             / .'   '. \\ \n");
    printf("         ,--(_;.-----.;_)--, \n");
    printf("        /   |  \\     /  |   \\ \n");
    printf("       /   /;'-.'._.'.-';\\   \\            MOTH:   Yes, I'm a Moth! But I suggest you don't underestimate me! \n");
    printf("    ,-'   /, \\~ \\-=-/ ~/ ,\\   '-,                 Your people and mine have a history, you know?!\n");
    printf("         ; ;  |~ '.' ~|  ; ; \n");
    printf("         |; '  \\=====/  ; ;| \n");
    printf("        /| ; ;_| === |_; ; |\\");
    color(11,0);
    printf("              YOU:    Uh... Okay? I just need to finish this program, \n");
    color(4,0);
    printf("       / |  \\_/;= = =;\\_/  | \\                     ");
    color(11,0);
    printf("go find a lamp or someth-\n");
    color(4,0);
    printf("     _/  | ; ;_ \\===/ _; ; |  \\_ \n");
    printf("    `    |  \\_/ ;\\=/; \\_/  |    ` \n");
    printf("         | \\_| ; ;|; ; |_/ | \n");
    printf("         ;\\_/ ; ;/ \\; ; \\_/; \n");
    printf("         ;/, ; ; | | ; ; ,\\; \n");
    printf("         |; ; ; /  \\ ; ; ; | \n");
    printf("          \\; ; ;|   |; ; ; / \n");
    printf("           \\; ; /    \\ ; ;/ \n");
    printf("            \\_.'      '._/ \n");
    color(15,0);
}

