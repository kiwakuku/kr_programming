#include "Hero.h"
#include <iostream>
using namespace std;

Hero::Hero(string name, int health, int mana)
{
    this->name   = name;
    this->health = health;
    this->mana   = mana;
}

// Дружественная функция — имеет доступ к закрытым полям
void printState(const Hero& h)
{
    cout << "Имя: "      << h.name   << endl;
    cout << "Здоровье: " << h.health << endl;
    cout << "Мана: "     << h.mana   << endl;
}

// Метод Лекаря — тоже имеет доступ к закрытым полям через friend
void Healer::heal(Hero& h)
{
    h.health += 20;
    h.mana   += 10;
}
