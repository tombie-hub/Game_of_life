#include "komorka.h"

komorka::komorka():
    stan(false)
{
    //ctor
}

komorka::~komorka()
{
    //dtor
}

void komorka::setStan(bool a)
{
    stan = a;
}

bool komorka::getStan()
{
    return stan;
}
