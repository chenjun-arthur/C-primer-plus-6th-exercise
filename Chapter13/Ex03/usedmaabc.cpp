// usedma.cpp -- inheritance, friends, and DMA
// compile with dmaabc.cpp
#include <iostream>
#include "dmaabc.h"
int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "Displaying baseDMA object:\n";
    shirt.View();
    cout << endl;
    cout << "Displaying lacksDMA object:\n";
    balloon.View();
    cout << endl;
    cout << "Displaying hasDMA object:\n";
    map.View();
    cout << endl;
    lacksDMA balloon2(balloon);
    cout << "Result of lacksDMA copy:\n";
    balloon2.View();
    cout << endl;
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment:\n";
    map2.View();
    cout << endl;

    
    return 0; 
}
