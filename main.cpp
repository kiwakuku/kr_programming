#include "Lamp.h"
#include <iostream>
using namespace std;

int main()
{
    // Построение системы: создать объект
    Lamp* obj = new Lamp();

    // Уничтожить объект
    delete obj;

    // Завершить работу системы
    return 0;
}
