/*
 Algorytm ktory podaje ilość dzielników liczby
 Wykorzystuje metodą z innego algorytmu (szybkie_dzielniki.cpp)
 
 Zlozonosc: O(sqrt(n))
*/

#include <iostream>
#include <cmath> // niepotrzbene, blibliotek STL zapewnia sqrt

using namespace std;

int ile_dzielnikow_liczby(int N)
{
    int ile = 0;
    for (int i = 0; i < std::sqrt(N); i++)
        if(N % i) ile++;
    return ile;
}