#include <iostream>
#include "Szerzo.h"


Szerzo::Szerzo(string vezetekNev, string keresztNev)//konstruktor
{
    this->vezetekNev = vezetekNev;
    this->keresztNev = keresztNev;
}

ostream& operator<<(ostream& os, const Szerzo& szerzo)
{
    os << szerzo.vezetekNev << " " << szerzo.keresztNev << endl;
    return os;
}
