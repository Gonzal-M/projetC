#include <stdio.h>
#include <stdlib.h>

int SearchP(char* map){
    for(int i=0;i<=34;i++){
        if (map[i]=='P'){
            return i;
        }
    }
}
