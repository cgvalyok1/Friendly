#include <iostream>
#include "Character.h"
#include "Aptechka.h"
//��������� ����� ������������� ������� ����� � �� �������� ������������
using namespace std;

void SystemHeal(Character &ch, int hp)
{
    ch.HP += hp;
}

int main()
{
    Character chel = Character(10);
    Aptechka apteka = Aptechka(5);
    chel.Status();
    //�������� �������� �� ������
    apteka.Heal(chel);
    apteka.Heal(chel);
    chel.Status();
    SystemHeal(chel, 15);
    chel.Status();
    return 0;
}
