#include <iostream>
#include <string>

enum MonsterType
{
    ogre,
    dragon,
    orc,
    spider,
    slime,
};

struct Monster
{
    MonsterType type;
    std::string name;
    int maxHealth {};
};

void printMonster(Monster& monster)
{
    std::cout << "This ";

    switch(monster.type)
    {
    case ogre:
        std::cout << "Ogre";
        break;
    case dragon:
        std::cout << "Dragon";
        break;
    case orc:
        std::cout << "Orc";
        break;
    case spider:
        std::cout << "Spider";
        break;
    case slime:
        std::cout << "Slime";
        break;
    }

    std::cout << " is named " << monster.name << " and has " << monster.maxHealth << " health.\n";

    return;
}

int main()
{
    Monster monst1 {ogre, "Torg", 145};
    Monster monst2 {slime, "Blurp", 23};

    printMonster(monst1);
    printMonster(monst2);

    return 0;
}