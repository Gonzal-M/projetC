#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void StayInShop(Player* Player)
{
    printf("\n\n 1. Stay in the shop \n 2. Exit the shop\n\n");
    int exitChoice;
    scanf(" %d",&exitChoice);
    if (exitChoice == 1)
    {
        Merchant(&Player);
    }
    else if(exitChoice==2)
    {
        color(11,0);
        printf("\n\nThank you, come again!\n\n");
        color(15,0);
    }
    else{
        color(8,0);
        printf("\n\nUnknown choice. Please choose again.\n\n");
        color(15,0);
        StayInShop(&Player);
    }
}

void ThanksPurchase(){
    color(11,0);
    printf("\n\nThank you for your purchase! Do you want anything else?\n\n");
    color(15,0);
}
void NotEnoughMoney(){
    color(12,0);
    printf("\n\nYou don't have enough to buy this item.\n\n");
    color(15,0);
}


void Merchant(Player* Player)
{
    color(11,0);
    printf("MERCHANT: Welcome to my shop! Here's what I have to offer: \n\n");
    color(15,0);
    printf(" 1. Coffee       : $10       +20 Energy!\n");
    printf(" 2. Energy Drink : $20       +50 Energy!\n\n");
    printf(" 3. Ynov Course  : $15       +10 Attack!\n");
    printf(" 4. Auto-Debug   : $15       +10 Defense!\n\n");
    printf("0. Exit the shop. You won't be able to buy anything unless you come back to a merchant.\n");

    int choice;
    scanf(" %d",&choice);

    if (choice == 1)
    {
        if ((*Player).money >= 10)
        {
           (*Player).money -= 10;
           (*Player).Inventory.coffee += 1;
           ThanksPurchase();
           StayInShop(&Player);

        }
        else
        {
            NotEnoughMoney();
            Merchant(&Player);
        }
    }
    else if (choice == 2)
    {
        if ((*Player).money >= 20)
        {
           (*Player).money -= 20;
           (*Player).Inventory.energyDrink += 1;
           ThanksPurchase();
           StayInShop(&Player);
        }
        else
        {
            NotEnoughMoney();
            Merchant(&Player);
        }
    }
    else if (choice == 3)
    {
        if ((*Player).money >= 15)
        {
           (*Player).money -= 15;
           (*Player).Inventory.ynovCourses += 1;
           ThanksPurchase();
           StayInShop(&Player);
        }
        else
        {
            NotEnoughMoney();
            Merchant(&Player);
        }
    }
    else if (choice == 4)
    {
        if ((*Player).money >= 15)
        {

            (*Player).money -= 15;
            (*Player).Inventory.autodebug += 1;
            ThanksPurchase();
            StayInShop(&Player);
        }
        else
        {
            NotEnoughMoney();
            Merchant(&Player);
        }
    }
    else if (choice == 0)
    {
        color(11,0);
        printf("\n\nThank you, come again!\n\n");
        color(15,0);
    }
    else
    {
        color(8,0);
        printf("\n\nUnknown choice. Please choose again.\n\n");
        color(15,0);
        Merchant(&Player);
    }
}
