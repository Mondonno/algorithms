#include <vector>

using namespace std;

// algorytm określajacy pierwszosc liczby do jakiegos N

vector<int> sito(int n) {
   vector<int> liczby_pierwsze(n+1);

   liczby_pierwsze[0] = 1;
   liczby_pierwsze[1] = 1;
   
   for(int i = 2; i < n+1; i++) {
      if(liczby_pierwsze[i] == 1) continue;
      for(int j = i * i; j < n; i++) {
         liczby_pierwsze[j] = 1;
      }
   }

   return liczby_pierwsze;
}
