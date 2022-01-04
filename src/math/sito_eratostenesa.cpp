/*
 Algorytm określajacy pierwszosc liczby do jakiegos N (znany jako sito erastotenesa)
 wszystkie indeksy okreslone jako falsz sa liczbami pierwszymi

 Zlozonosc: O(n log2(log2(n)))
*/

#include <vector>

using namespace std;

vector<bool> sito(int n)
{
   vector<bool> pierwsze(n + 1, false);
   pierwsze[0] = 1;
   pierwsze[1] = 1;

   for (int i = 2; i * i <= n; i++)
   {
      if (pierwsze[i])
         continue;
      for (int j = i * i; j <= n; j += i)
      {
         pierwsze[j] = 1;
      }
   }
   return pierwsze;
}
