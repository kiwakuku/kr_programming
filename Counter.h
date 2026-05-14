#pragma once
#ifndef __COUNTER_H__
#define __COUNTER_H__

class Counter
{
public:
    int openValue;             // Открытое свойство

    void setHiddenValue(int hiddenValue); // Установка скрытого свойства
    int  getHiddenValue();                // Получение скрытого свойства
    void modifyValues();                  // Изменение всех свойств

private:
    int hiddenValue;           // Закрытое свойство
};

#endif // !__COUNTER_H__
