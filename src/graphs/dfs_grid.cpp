// tablice zmian polozen
int dx[] = {0, 0, -1, 1}
int dy[] = {1, -1, 0, 0};

// zmienne wymagane do definicji grafu
int n, m;
vector<bool> odwiedzone[n][m];

void dfs_grid(int v, int w){
    int i;
    odwiedzone[v][w] = true;
    for(i = 0; i < 4; i++){
        pair <int, int> sasiad = make_pair(v + dx[i], w + dy[i]);
        if(1 <=sasiad.first && sasiad.first <=n &&
            1 <=sasiad.second && sasiad.second <=m ) {
            if(odwiedzone[sasiad.first][sasiad.second] == false) {
                odwiedzone[sasiad.firt][sasiad.second] = true;
                dfs_grid(sasiad.first, sasiad.second);
            }
        }
    }
} 