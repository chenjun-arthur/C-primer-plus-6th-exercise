// use with port.cpp
#include <iostream>
#include "port.h"

int main()
{
    using std::cout;
    using std::endl;

    Port Gallo = Port("Gallo", "tawny", 20);
    Gallo.Show();

    Port cpGallo = Gallo;
    cout << cpGallo << endl;

    VintagePort Noble = VintagePort("Gallo", 20, "The Noble", 2003);
    Noble.Show();
    VintagePort temp;
    cout << temp << endl;
    temp = Noble;
    cout << temp << endl;
    return 0;
}