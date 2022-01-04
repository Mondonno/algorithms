// Sumy prefiksowe na przedzialach ktore sie moga nakladać
// Zlozonosc:
//      - Wyplenienie: O(n)
//      - Odpytanie: O(b - a)


#include <vector>

using namespace std;

int zaladuj(int a, int b,int c, vector<int> sumy) // a - poczatek przedzialu, b - koniec przedzialu, c - wartosc na przedzial
{
   sumy[a] += c;
   sumy[b] -= c;
}

vector<int>  pobierz_wszystko(int n, vector<int> sumy) { // pobiera wartosci dla końcowych punktow (wszystkich)
   int punkty[n];
   int wynik = 0;
   for(int i = 1; i <= n; i++) {
      wynik += sumy[i];
      punkty[i] = wynik;
   }

   return punkty;
}

int pobierz_dla_przedzialu(int a, int b, vector<int> sumy) {
  int wynik = 0;
  for(int i = a - 1; i <= b; i++) {
    wynik += sumy[i];
  }

  return wynik; 
}
