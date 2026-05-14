#include "Counter.h"

void Counter::setHiddenValue(int hiddenValue)
{
    this->hiddenValue = hiddenValue;
}

int Counter::getHiddenValue()
{
    return hiddenValue;
}

void Counter::modifyValues()
{
    // Чётные делятся на 2, нечётные умножаются на 2
    if (openValue % 2 == 0)
        openValue = openValue / 2;
    else
        openValue = openValue * 2;

    if (hiddenValue % 2 == 0)
        hiddenValue = hiddenValue / 2;
    else
        hiddenValue = hiddenValue * 2;
}
