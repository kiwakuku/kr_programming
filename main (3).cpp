#include "Character.h"
#include <iostream>
using namespace std;

int main()
{
    // Динамически создаём объект
    Character* hero = new Character();

    int hp;
    cout << "Введите начальное здоровье: ";
    cin >> hp;

    hero->setHealth(hp);

    cout << "До функций: health = " << hero->getHealth() << endl;

    // Передача по указателю — меняет оригинал
    healByPointer(hero);
    cout << "После healByPointer: health = " << hero->getHealth() << endl;

    // Передача по значению — оригинал не меняется
    healByValue(*hero);
    cout << "После healByValue: health = " << hero->getHealth() << endl;

    // Освобождаем память
    delete hero;

    return 0;
}
