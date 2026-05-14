#pragma once
#ifndef __HERO_H__
#define __HERO_H__

#include <string>
using namespace std;

// Предварительное объявление
class Healer;

class Hero
{
    // Дружественная функция вывода состояния
    friend void printState(const Hero& h);

    // Дружественный класс Лекарь
    friend class Healer;

public:
    Hero(string name, int health, int mana); // Конструктор

private:
    string name;    // Имя героя
    int    health;  // Здоровье
    int    mana;    // Мана
};

// Дружественная функция вывода
void printState(const Hero& h);

// Класс Лекарь
class Healer
{
public:
    void heal(Hero& h); // Увеличивает health+20, mana+10
};

#endif // !__HERO_H__
