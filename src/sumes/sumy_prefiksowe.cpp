/*
 Algorytm sum prefiksowych czyli sum na przedziale
 Zloznosc:
    - Odpowiedanie: O(1)
    - Wczytywanie: O(n)
*/

#include <vector>

using namespace std;

vector<int> wczytaj(vector<int> elementy) {
    vector<int> sumy_prefiksowe(n);
    sumy_prefiksowe[0] = 0;

    int wielkoscTablicy = (int) elementy.size();

    for (int i = 1; i <= wielkoscTablicy; ++i) {
        sumy_prefiksowe[i] = sumy_prefiksowe[i - 1] + elementy[i - 1];
    }

    return sumy_prefiksowe;
}

int pobierz(int a, int b, vector<int> sumy) {
  return sumy[b] - sumy[a - 1];
}
