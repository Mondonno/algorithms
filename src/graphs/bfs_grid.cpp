#include <vector>
#include <queue>

using namespace std;

const int wielkoscGrida = 1e6;

int dx[] = {0, 0, -1, 1}, dy[] = {1, -1, 0, 0};
int n, m;

vector<vector<bool>> odwiedzoneWierzcholki(wielkoscGrida, vector<bool>(wielkoscGrida));
vector<vector<int>> odleglosciWierzcholkow(wielkoscGrida, vector<int>(wielkoscGrida));

void bfs_grid(){
    queue <pair <int, int> > kolejkaWierzcholkow;
    kolejkaWierzcholkow.push(make_pair(1,1));
    odwiedzoneWierzcholki[1][1] = true;

    while(kolejkaWierzcholkow.size() > 0) {
        int obecnyWierzcholek = kolejkaWierzcholkow.front().first;
        int obecnaKolumna = kolejkaWierzcholkow.front().second;

        kolejkaWierzcholkow.pop();

        for(int i = 0; i < 4; i++) {
            pair <int, int> sasiad = make_pair (obecnyWierzcholek + dx[i], obecnaKolumna + dy[i]);

            if(1 <= sasiad.first && sasiad.first <=n &&
            1 <= sasiad.second && sasiad.second <=m ) {
                if(odwiedzoneWierzcholki[sasiad.first][sasiad.second] == false){
                    odwiedzoneWierzcholki[sasiad.first][sasiad.second] = true;
                    kolejkaWierzcholkow.push(sasiad);
                    odleglosciWierzcholkow[sasiad.first][sasiad.second] = odleglosciWierzcholkow[obecnyWierzcholek][obecnaKolumna] + 1;
                }
            }
        }
    }
}