#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> dijkstra(vector<pair<int, long long>> graf, int wielkoscGrafu) {
   vector<int> odleglosci(wielkoscGrafu);
   vector<bool> odwiedzone(wielkoscGrafu);

   odleglosci[0] = 1;
   priority_queue<pair<long long, int>> kolejka;
   kolejka.push(make_pair(0, 1));

   while(kolejka.size()) {
      int topElement = kolejka.top().second;

      kolejka.pop();
      if(odwiedzone[topElement]) continue;

      odwiedzone[topElement] = true;

      // editor bugs again?
      // need some bindings?
      for(auto i : graf[topElement]) {
         if(odleglosci[i.first] > odleglosci[topElement] + i.second) {
            odleglosci[i.first] = odleglosci[topElement] + i.second;
	         kolejka.push(make_pair(-odleglosci[i.first], i.first));
         }
      }
   }

   // w tym miejscu zalezy od nas co zwracamy
   // tak naprawde moze too byc cokolwiek z tej metody czyli tylko to co potrzebujemy
   // w tym przypadku sobie zwracamy odleglosci wierzcholkow

   return odleglosci;
}
