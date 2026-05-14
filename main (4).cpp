#include "Hero.h"
#include <iostream>
using namespace std;

int main()
{
    string name;
    int health, mana;

    cout << "Введите имя героя: ";
    cin >> name;
    cout << "Введите здоровье: ";
    cin >> health;
    cout << "Введите ману: ";
    cin >> mana;

    // Создаём персонажа
    Hero hero(name, health, mana);

    // Выводим исходное состояние
    cout << "\n--- Исходное состояние ---" << endl;
    printState(hero);

    // Лекарь лечит героя
    Healer healer;
    healer.heal(hero);

    // Выводим состояние после лечения
    cout << "\n--- После лечения ---" << endl;
    printState(hero);

    return 0;
}
