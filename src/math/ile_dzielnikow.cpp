#include <iostream>
#include <cmath> // niepotrzbene, blibliotek STL zapewnia sqrt

using namespace std;

int ile_dzielnikow(int N)
{
    int ile = 0;
    for (int i = 0; i < std::sqrt(N); i++)
        if(N % i) ile++;
    return ile;
}