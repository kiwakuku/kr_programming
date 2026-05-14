#pragma once
#ifndef __DATAOBJ_H__
#define __DATAOBJ_H__

class DataObj
{
public:
    int openProp;                 // Открытое свойство

    void init(int param);         // Задать исходные значения
    void change();                // Изменить значения свойств
    void callHidden();            // Вызвать скрытый метод
    void printState();            // Вывести состояние

private:
    int  hiddenProp;              // Скрытое свойство
    void hiddenMethod();          // Скрытый метод
};

#endif // !__DATAOBJ_H__
