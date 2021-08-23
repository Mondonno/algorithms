// metoda w jaki sposob zapelnic

int* zapelnij(int n) {
   int sumy_prefiksowe[n];
   for(int i = 1; i <= n; i++) {
      sumy_prefiksowe[i] += sumy_prefiksowe[i - 1];
   }
}

int pobierz(int a, int b, int* sumy) {
  return sumy[b] - sumy[a - 1];
}
