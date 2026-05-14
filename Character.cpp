#include "Character.h"
#include <iostream>
using namespace std;

void Character::setHealth(int value)
{
    health = value;
}

int Character::getHealth()
{
    return health;
}

void Character::changeHealth(int delta)
{
    health += delta;
}

// По указателю — изменяет оригинальный объект
void healByPointer(Character* c)
{
    if (c->getHealth() < 50)
        c->changeHealth(10);
    else
        c->changeHealth(-5);
}

// По значению — изменяет только копию, оригинал не меняется
void healByValue(Character c)
{
    if (c.getHealth() < 50)
        c.changeHealth(10);
    else
        c.changeHealth(-5);

    cout << "Внутри healByValue health = " << c.getHealth() << endl;
}
