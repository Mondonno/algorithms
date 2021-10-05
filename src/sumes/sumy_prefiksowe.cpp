#include <vector>

using namespace std;

// sumy prefiksowe czyli sumy na przedziale

// metoda w jaki sposob zapelnic
vector<int> zapelnij(int n) {
   int sumy_prefiksowe[n];
   for(int i = 1; i <= n; i++) {
      sumy_prefiksowe[i] += sumy_prefiksowe[i - 1];
   }
}

int pobierz(int a, int b, vector<int> sumy) {
  return sumy[b] - sumy[a - 1];
}
