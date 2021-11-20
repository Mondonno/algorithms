// Algorytm szukający dzielników sprytną metodą (tzn. od 1 do sqrt(n))
// Zlozonosc: O(sqrt(n))

#include <iostream>
#include <vector>
#include <cmath> // niepotrzbene ze wzgledu na biblioteke STL

using namespace std;

vector<int> dzielniki(int n) {
  vector<int> wszystkieDzielniki;
  for(int i=1; i<=sqrt(n); i++) {
      if(n % i == 0) {
          wszystkieDzielniki.push_back(i);
          wszystkieDzielniki.push_back(n / i);
      }
  }

  return wszystkieDzielniki;
}
