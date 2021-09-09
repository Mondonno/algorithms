// referencja do: https://cp-algorithms.com/data_structures/sparse-table.html

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAXN = 1e9; // przykladowa wartosc
const int K = 25; // przykladowa wartosc K dla przedzialu <= 10^7 (dziesiec do potegi 7)

int log[MAXN];
int st[MAXN][K + 1];

void wypelnij(int* array, int N) { // wypelnia 
    int log[MAXN+1];
    log[1] = 0;
    for (int i = 2; i <= MAXN; i++)
        log[i] = log[i/2] + 1;

    int st[MAXN][K + 1];

    for (int i = 0; i < N; i++)
        st[i][0] = array[i];

    for (int j = 1; j <= K; j++)
        for (int i = 0; i + (1 << j) <= N; i++)
            st[i][j] = min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);

    return;
}

int rezultat(int L, int R) {
    int j = log[R - L + 1];
    int minimum = min(st[L][j], st[R - (1 << j) + 1][j]);
    
    return minimum;
}