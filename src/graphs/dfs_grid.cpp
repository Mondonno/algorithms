#include <iostream>
#include <vector>

using namespace std;
using std::vector;

// tablice zmian polozen
const int zmianyPolozen = 4;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

// zmienne wymagane do definicji grafu
// n - liczba wierzow
// m - liczba kolumn
int n = 1e6;
int m = 1e6;

vector<vector<bool>> odwiedzone;

void dfs_grid(int v, int w){
    int i;
    odwiedzone[v][w] = true;

    for(i = 0; i < zmianyPolozen; i++){
        pair <int, int> sasiad = make_pair(v + dx[i], w + dy[i]);
        if(1 <=sasiad.first && sasiad.first <=n &&
            1 <=sasiad.second && sasiad.second <=m ) {
            if(odwiedzone[sasiad.first][sasiad.second] == false) {
                odwiedzone[sasiad.first][sasiad.second] = true;
                dfs_grid(sasiad.first, sasiad.second);
            }
        }
    }
} 