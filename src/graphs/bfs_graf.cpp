#include <queue>
#include <vector>

using namespace std;

const int wielkoscGrafu = 1e6;

vector<vector<int>> graf(wielkoscGrafu);
bool odwiedzoneWierz[wielkoscGrafu];
int odleglosciWierz[wielkoscGrafu];

void bfs(int gdzieStart) {
    // wtf? queue is not found? editor bugs though bruh...
    queue<int> kolejkaWierzcholkow;
    kolejkaWierzcholkow.push(gdzieStart);

    int obecnyWierz = gdzieStart;

    while(kolejkaWierzcholkow.size() != 0) {
        obecnyWierz = kolejkaWierzcholkow.front();
        kolejkaWierzcholkow.pop();
        for(int i : graf[obecnyWierz]) {
            if(!odwiedzoneWierz[i]) {
                odwiedzoneWierz[i] = true;
                odleglosciWierz[i] = odleglosciWierz[obecnyWierz] + 1;

                kolejkaWierzcholkow.push(i);
            }
        }
    }
}