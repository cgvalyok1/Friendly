#include "Aptechka.h"
Aptechka::Aptechka(int a)
{
    capacity = a;
    Active = true;
}

void Aptechka::Heal(Character &ch)
{
    if (Active)
    {
        ch.HP += capacity;
        Active = false;
    }
}

bool Aptechka::IsActive()
        {
            return Active;
        }

Aptechka::~Aptechka()
{
    //dtor
}
