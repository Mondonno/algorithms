#include <iostream>
#include <cmath> // niepotrzbene, blibliotek STL zapewnia sqrt

int ile_dzielnikow(int N)
{
    int ile = 0;
    for (int i = 0; i < std::sqrt(N); i++)
        if(N % i) ile++;
    return ile;
}