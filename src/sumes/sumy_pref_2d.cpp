// sumy prefiksowe dla grida

int** wypelnij(int a1, int b1, int a2, int b2, int** sumy) {
    for(int i = a1 + 1; i <= b1 - 1; i++) {
       for(int j = a2 + 1; j <= b2 - 1; j++) {
          sumy[i][j] += sumy[i - 1][j] + sumy[i][j - 1] - sumy[i - 1][j - 1];
       }
    }
    return sumy;
} 

int rozwiaz(int a, int b, int c, int d, int** sumy) {
   int wynik = sumy[c][d];
   wynik -= sumy[a - 1][d];
   wynik -= sumy[c][b - 1];
   wynik += sumy[a - 1][b - 1];
   return wynik;
}
