#include <stdio.h>
#include <stdlib.h>

void Hints(int coord){
    if(coord==5){
        printf("\n \n You decided to take a break today and went on the Internet.\n You ended up on a forum about the game you've been playing recently and found a post that reads :\n 'Here lies a bug.\n It died after spending too much time in a computer screen.\n Maybe you will find one living in yours too?'\n It might be closer than you think... \n \n");
    }else if (coord==7){
        printf("\n \n You decided to take a break today and went on the Internet.\n You ended up on a forum about the game you've been playing recently and found a post that reads :\n 'Please remember to adjust the computer system's clock every new millennium.' \n Hmm... what is that doing here? \n Try heading to your right and who knows?\n Maybe you'll find what you need... \n \n");
    }else if(coord==17){
        printf("\n \n You decided to take a break today and went on the Internet.\n You ended up on a forum about the game you've been playing recently and found a post that reads :\n 'Yesterday I found out that a spaceship crashed into an asteroid field...\n Just because the scientists forgot to convert feet into meters!!\n I hope I won't make a mistake THAT bad...'\n\n Filled with inspiration, you might be tempted to fly up like a spaceship...\n Hopefully you won't go down as well!  \n \n");
    }else if(coord==27){
        printf("\n \n You decided to take a break today and went on the Internet.\n You ended up on a forum about the game you've been playing recently and found a post that reads :\n 'WARNING: All users possessing a 32bit computer system will NEED \n to replace them for a 64bit machine before 03:14:07 UTC on 19 January 2038.\n Thank you for your understanding.'\n Terrified by the sudden news, you decide to finish the project and check your computer.\n In order to do do it as fast as you can, you can go to the top of the map. \n \n");
    }else if(coord==29){
        printf("\n \n You decided to take a break today and went on the Internet.\n You ended up on a forum about the game you've been playing recently and found a post that reads :\n ''Person1: Hey guys! I've finished the gas piping program! Want to try it?\n Person2: Sure!\n Person3: I'll tell you what I think of it :D\n Person2: Why did it destroy the factory?? Most of the buildings are destroyed!!\n Person3: Really?! Good thing I didn't try it yet...''\n And that's why the soviets made the biggest non-nuclear explosion ever made... Don't trust random people to code for you guys!\n\n Well... You learned something new at least... It's best to go up and continue coding. \n \n");
    }
}
