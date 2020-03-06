#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

void Merchant(Player* Player)
{
    printf("Welcome to my shop! Here's what I have to offer: \n");
    printf("1. Coffee       : $10       +20 Energy!\n");
    printf("2. Energy Drink : $20       +50 Energy!\n\n");
    printf("3. Ynov Course  : $15       +10 Attack!\n");
    printf("4. Auto-Debug   : $15       +10 Defense!\n\n");
    printf("0. Exit the shop. You won't be able to buy anything unless you come back to a merchant.\n");

    int choice;
    scanf("%d",&choice);

    if (choice == 1)
    {
        if ((*Player).money >= 10)
        {
           (*Player).money -= 10;
           (*Player).Inventory.coffee += 1;
           printf("\n\nThank you for your purchase! Do you want anything else?\n\n");
           StayInShop(&Player);

        }
        else
        {
            printf("\n\nYou don't have enough to buy this item.\n\n");
            Merchant(&Player);
        }
    }
    else if (choice == 2)
    {
        if ((*Player).money >= 20)
        {
           (*Player).money -= 20;
           (*Player).Inventory.energyDrink += 1;
           printf("\n\nThank you for your purchase! Do you want anything else?\n\n");
           StayInShop(&Player);
        }
        else
        {
            printf("\n\nYou don't have enough to buy this item.\n\n");
            Merchant(&Player);
        }
    }
    else if (choice == 3)
    {
        if ((*Player).money >= 15)
        {
           (*Player).money -= 15;
           (*Player).Inventory.ynovCourses += 1;
           printf("\n\nThank you for your purchase! Do you want anything else?\n\n");
           StayInShop(&Player);
        }
        else
        {
            printf("\n\nYou don't have enough to buy this item.\n\n");
            Merchant(&Player);
        }
    }
    else if (choice == 4)
    {
        if ((*Player).money >= 15)
        {

            (*Player).money -= 15;
            (*Player).Inventory.autodebug += 1;
            printf("\n\nThank you for your purchase! Do you want anything else?");
            StayInShop(&Player);
        }
        else
        {
            printf("\n\nYou don't have enough to buy this item.\n\n");
            Merchant(&Player);
        }
    }
    else if (choice == 0)
    {
        printf("\n\nThank you, come again!\n\n");
    }
    else
    {
        printf("\n\nUnknown choice. Please choose again.\n\n");
        Merchant(&Player);
    }
}

void StayInShop(Player* Player)
{
    printf("\n\n 1. Stay in the shop \n 2. Exit the shop\n\n");
    int exitChoice;
    scanf("%d",&exitChoice);
    if (exitChoice == 1)
    {
        Merchant(&Player);
    }
    else if(exitChoice==2)
    {
        printf("\n\nThank you, come again!\n\n");
    }
    else{
        printf("\n\nUnknown choice. Please choose again.\n\n");
        StayInShop(&Player);
    }
}
