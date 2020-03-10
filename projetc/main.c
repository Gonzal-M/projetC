#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "Character.h"
#include <windows.h>

void color(int t, int f)
{
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(H,f*16+t);
}

int main()
{
    menu();
    return 0;
}
