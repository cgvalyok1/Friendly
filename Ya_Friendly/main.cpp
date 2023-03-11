#include <iostream>
//придумать когда дружественна€ функци€ нужна и не нарушает инкапсул€цию
using namespace std;


class Character
{
    public:
        Character(int hp)
        {
            HP = hp;
        }
        void Status()
        {
            if (HP > 0) {cout << "HP = " << HP << endl;}
            else {cout << "RIP" << endl;}
        }
        friend class Aptechka;
    private:
        int HP;
        friend void SystemHeal(Character &ch, int hp);
};

class Aptechka
{
    public:
    Aptechka(int a)
    {
        capacity = a;
        Active = true;
    }
    void Heal(Character &ch)
    {
        if (Active)
        {
            ch.HP += capacity;
            Active = false;
        }
    }
    bool IsActive()
    {
        return Active;
    }
    private:
        bool Active;
        int capacity;
};

void SystemHeal(Character &ch, int hp)
{
    ch.HP += hp;
}

int main()
{
    Character chel = Character(10);
    Aptechka apteka = Aptechka(5);
    chel.Status();
    //допустим наступил на аптеку
    apteka.Heal(chel);
    apteka.Heal(chel);
    chel.Status();
    SystemHeal(chel, 15);
    chel.Status();
    return 0;
}
