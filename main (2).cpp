#include "DataObj.h"
#include <iostream>
using namespace std;

int main()
{
    int i_data;
    cout << "Введите i_data: ";
    cin >> i_data;

    DataObj obj;

    obj.init(i_data);
    cout << "Исходное состояние:   "; obj.printState();

    obj.change();
    cout << "После change():       "; obj.printState();

    cout << "Введите i_data: ";
    cin >> i_data;

    obj.openProp *= i_data;
    cout << "После умножения:      "; obj.printState();

    obj.callHidden();
    cout << "После callHidden():   "; obj.printState();

    return 0;
}
