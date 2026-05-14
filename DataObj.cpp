#include "DataObj.h"
#include <iostream>
using namespace std;

void DataObj::init(int param)
{
    openProp   = param;
    hiddenProp = param * 2;
}

void DataObj::change()
{
    openProp   += 1;
    hiddenProp += 4;
}

void DataObj::callHidden()
{
    hiddenMethod();
}

void DataObj::printState()
{
    cout << "openProp = "   << openProp
         << ", hiddenProp = " << hiddenProp << endl;
}

void DataObj::hiddenMethod()
{
    openProp   += 7;
    hiddenProp += 56;
}
