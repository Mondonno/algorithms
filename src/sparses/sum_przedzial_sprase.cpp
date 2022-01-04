// UWAGA!
// To rozwiązanie jest wolniejsze niz sumy prefiksowe opisane takze w tym zbiorze algorytmow.

/*
 (Ten) algorytm to rozwiązane na branie sumy z przedizalu dziala kilkukrotnie dluzej od sum prefiksowych ktore dzialaja w czasie O(1)
 tablice sparse to lepsze rozwiazanie na min z przedzialu poniewaz dziala to w czasie stalym
*/

// todo: dodac zloznosc czasowa

#include <vector>

const int MAXN = 1e9; // przykladowa wartosc
const int K = 25; // przykladowa wartosc K dla przedzialu <= 10^7 (dziesiec do potegi 7)

long long st[MAXN][K + 1];

int wypelnij(std::vector<int> array, int N) {
    for (int i = 0; i < N; i++)
        st[i][0] = array[i];

    for (int j = 1; j <= K; j++)
        for (int i = 0; i + (1 << j) <= N; i++)
            st[i][j] = st[i][j-1] + st[i + (1 << (j - 1))][j - 1];
}

int rezultat(int L, int R) {
    long long sum = 0;
    for (int j = K; j >= 0; j--) {
        if ((1 << j) <= R - L + 1) {
            sum += st[L][j];
            L += 1 << j;
        }
    }
}