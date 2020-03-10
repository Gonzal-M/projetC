#ifndef CHARACTERS
#define CHARACTERS

typedef struct Inventory Inventory;
typedef struct Player Player;
typedef struct Enemy Enemy;

struct Inventory{
    int coffee;         //health +
    int energyDrink;    //health ++

    int ynovCourses;    //attack boosts
    int autodebug;      //defense boost

    int numpad;         //weapon +
    int mouseXtraKeys;  //weapon ++
    int macroKeypad;    //weapon +++
};
struct Player{
    char name[50];

    int energy;
    int maxenergy;

    int attack;
    int attackboost;

    int defense;
    int defenseboost;

    int money;

    int xp;
    int level;

    struct Inventory Inventory;
};

struct Enemy{
    int hp;
    int attack;
    int defense;
    int level;
    char name[10];
};


#endif // CHARACTERS
