#ifndef CHARACTER_H
#define CHARACTER_H


class Character
{
    public:
        Character(int hp);
        void Status();
        friend class Aptechka;
        virtual ~Character();
    protected:
    private:
        int HP;
        friend void SystemHeal(Character &ch, int hp);
};

#endif // CHARACTER_H
