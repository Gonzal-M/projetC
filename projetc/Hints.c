#include <stdio.h>
#include <stdlib.h>

void IntroHint(){
    color(11,0);
    printf("\n\nYou decided to take a break today and went on the Internet.\nYou ended up on a forum about the game you've been playing recently and found a post that reads:\n");
    color(15,0);
}

void Hints(int coord){
    if(coord==5){
        printf("\n\nYou decided to take a break today and went on the Internet.\nYou ended up on a forum about the game you've been playing recently and found a post that reads:\n");
        printf("Here lies a bug. It died after spending too much time in a computer screen.\nMaybe you'll find one living in yours too? It might be closer than you think...\n\n");
    }else if (coord==7){
        printf("\n\nYou decided to take a break today and went on the Internet.\nYou ended up on a forum about the game you've been playing recently and found a post that reads:\n");
        printf("'Please remember to adjust the computer's system clock every new millennium.' \nHmm... what is that doing here? Try heading to your right and who knows? Maybe you'll find what you need...\n\n");
    }else if(coord==17){
        printf("\n\nYou decided to take a break today and went on the Internet.\nYou ended up on a forum about the game you've been playing recently and found a post that reads:\n");
        printf("'Yesterday I found out that a spaceship crashed into an asteroid field... Just because the scientists forgot to \nconvert feet into meters!! I hope I won't make a mistake THAT bad...'\n");
        color(11,0);
        printf("Filled with inspiration, you might be tempted to fly up like a spaceship... Hopefully you won't go down too!\n\n");
        color(15,0);
    }else if(coord==27){
        printf("\n\nYou decided to take a break today and went on the Internet.\nYou ended up on a forum about the game you've been playing recently and found a post that reads:\n");
        printf("'WARNING: All users possessing a 32bit computer system will NEED to replace them for a 64bit machine before \n03:14:07 UTC on 19 January 2038. Thank you for your understanding.'\n");
        color(11,0);
        printf("Terrified by the sudden news, you decide to finish the project and check your computer.\nIn order to do do it as fast as you can, you can go to the top of the map.\n\n");
        color(15,0);
    }else if(coord==29){
        printf("\n\nYou decided to take a break today and went on the Internet.\nYou ended up on a forum about the game you've been playing recently and found a post that reads:\n");
        printf("Person1: Hey guys! I've finished the gas piping program! Want to try it?\nPerson2: Sure! I'll tell you what I think of it :D\n         ... Why did it destroy the factory?? ");
        printf("Most of the buildings are destroyed!!\nPerson3: Really?! Good thing I haven't tried it yet...\nPerson4: And that's how the soviets made the biggest non-nuclear explosion ever made...");
        printf("\n         Don't trust random people to code for you guys! Well... You learned something new at least... \n");
        color(11,0);
        printf("It's best to go up and continue coding.\n\n");
        color(15,0);
    }
}




