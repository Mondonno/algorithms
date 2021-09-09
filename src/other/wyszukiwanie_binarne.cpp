#include <iostream>

using namespace std;

int main()
{
    // dodany fragment
    int n;
    cin >> n;

    int tablica[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tablica[i];
    }

    int x = 0;
    // koniec dodanego fragmentu
    
    int poczatek = 0;
    int koniec = n - 1;
    while (poczatek < koniec)
    {
        // to jest dzielenie przez 2 z zaokrągleniem w górę
        // czyli ceil bez ceila, dla tych ktorzy nie sa zorientowani
        int srodek = (poczatek + koniec + 1) / 2; 
        if (tablica[srodek] <= x)
            poczatek = srodek;
        else
            koniec = srodek - 1;
    }
}