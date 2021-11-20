// Określa pierwszość podanej liczby (tzn. czy jest podzielna tylko przez siebie i 1)
// Zlozonosc: O(sqrt(n))

#include <cmath>

using namespace std;

int czy_pierwsza(int x)
{
  if(x == 1) return false;
  for(int i = 2; i < sqrt(x); i++) {
    if(x % i != 0) return false;
  }

  return true;
}
