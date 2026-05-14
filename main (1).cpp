#include "Counter.h"
#include <iostream>
using namespace std;

int main()
{
    Counter obj;

    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;

    // Присваиваем значения свойствам
    obj.openValue = a;
    obj.setHiddenValue(b);

    // Изменяем свойства
    obj.modifyValues();

    // Выводим результат
    cout << "openValue  = " << obj.openValue      << endl;
    cout << "hiddenValue = " << obj.getHiddenValue() << endl;

    return 0;
}
