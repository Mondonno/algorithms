// UWAGA!!! UWAGA!!! UWAGA!!!
// WOLNIEJSZE NIZ SUMY PREFIKSOWE
// to rozwiązane na branie sumy z przedizalu dziala kilkukrotnie dluzej od sum prefiksowych ktore dzialaja w czasie O(1)
// tablice sparse to lepsze rozwiazanie na min z przedzialu poniewaz dziala to w czasie stalym



long long st[MAXN][K + 1];

int wypelnij() {
    for (int i = 0; i < N; i++)
        st[i][0] = array[i];

    for (int j = 1; j <= K; j++)
        for (int i = 0; i + (1 << j) <= N; i++)
            st[i][j] = st[i][j-1] + st[i + (1 << (j - 1))][j - 1];
}