// sumy prefiksowe na przedzialach ktore sie moga nakladac

int zaladuj(int a, int b,int c, int* sumy) // a - poczatek przedzialu, b - koniec przedzialu, c - wartosc na przedzial
{
   sumy[a] += c;
   sumy[b] -= c;
}

int* pobierz_wszystko(int n, int* sumy) { // pobiera wartosci dla końcowych punktow (wszystkich)
   int punkty[n];
   int wynik = 0;
   for(int i = 1; i <= n; i++) {
      wynik += sumy[i];
      punkty[i] = wynik;
   }

   return punkty;
}

int pobierz_dla_przedzialu(int a, int b, int* sumy) {
  int wynik = 0;
  for(int i = a - 1; i <= b; i++) {
    wynik += sumy[i];
  }

  return wynik; 
}
