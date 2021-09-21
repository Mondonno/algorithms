int N;
vector<bool> odwiedzone(N, 0);
vector<int> graf(N, 0);

void dfs(int start){
    int i;
    odwiedzone[start] = true;

    for(i = 0; i < graf[start].size(); i++){
        if(odwiedzone[graf[start][i]] == false){
            dfs(graf[start][i]);
        }
    }
}