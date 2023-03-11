#ifndef APTECHKA_H
#define APTECHKA_H
#include "Character.h"

class Aptechka
{
    public:
        Aptechka(int a);
        void Heal(Character &ch);
        bool IsActive();
        virtual ~Aptechka();

    protected:

    private:
        bool Active;
        int capacity;
};

#endif // APTECHKA_H
