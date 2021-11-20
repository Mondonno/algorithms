// Algorytm DFS (Deapth First Search) dla grafu
// Zlozonosc: O(n+m)

#include <vector>

using namespace std;

int N;

vector<bool> odwiedzone;
vector<vector<int>> graf;

void dfs(int start){
    odwiedzone[start] = true;

    for(int i = 0; i < graf[start].size(); i++){
        if(odwiedzone[graf[start][i]] == false){
            dfs(graf[start][i]);
        }
    }
}