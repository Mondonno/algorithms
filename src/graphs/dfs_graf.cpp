#include <vector>

using namespace std;

int N;

vector<bool> odwiedzone;
vector<vector<int>> graf;

void dfs(int start){
    int i;
    odwiedzone[start] = true;

    for(i = 0; i < graf[start].size(); i++){
        if(odwiedzone[graf[start][i]] == false){
            dfs(graf[start][i]);
        }
    }
}