#pragma once
#ifndef __CHARACTER_H__
#define __CHARACTER_H__

class Character
{
public:
    void setHealth(int value);   // Установить здоровье
    int  getHealth();            // Получить здоровье
    void changeHealth(int delta);// Изменить здоровье

private:
    int health;                  // Значение здоровья
};

// Функция принимает указатель на объект
void healByPointer(Character* c);

// Функция принимает объект по значению
void healByValue(Character c);

#endif // !__CHARACTER_H__
