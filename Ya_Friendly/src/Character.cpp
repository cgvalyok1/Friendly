#include <iostream>
#include "Character.h"

Character::Character(int hp)
{
    HP = hp;
}

void Character::Status()
{
    if (HP > 0) {std::cout << "HP = " << HP << std::endl;}
    else {std::cout << "RIP" << std::endl;}
}

Character::~Character()
{
    //dtor
}
