#include <vector>

void dijkstra(vector<pair<int, long long>> graf, int wielkoscGrafu) {
   vector<int> odleglosci(wielkoscGrafu);
   vector<bool> odwiedzone(wielkoscGrafu);

   odleglosci[0] = 1;
   priority_queue<pair<long long, int>> kolejka;
   kolejka.push(make_pair(0, 1));

   while(kolejka.size()) {
      int topElement = kolejka.top().secound;

     kolejka.pop();
      if(odwiedzone[topElement]) continue;

      odwiedzone[topElement] = true;
      for(int i : graf[topElement]) {
         if(odleglosci[i.first] > odleglosci[topElement] + i.second) {
            odleglosci[i.first] = odleglosci[w] + i.second;
	    kolejka.push(make_pair(-odleglosci[i.first], i.first));
         }
      }
   }

  // tuttaj mozemy zwrocic odleglosci itp.
}
