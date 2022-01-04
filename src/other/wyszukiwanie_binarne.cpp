/*
 Wyszukiwanie binarne (ang. binary search).
 Działa on metodą połowienia ciągu az do uzyskania wyszukiwaniej wartości,
 aczkolwiek ciąg musi być posortowany (od najmniejszego do największego).

 Zlozonosc: O(log2(n))
*/

#include <vector>

using namespace std;

int binSearch(int poczatek, int koniec, int szukane, vector<int> tablica) {
    while(poczatek <= koniec){
        int srodek = (poczatek + koniec) / 2;

        if(tablica[srodek] < szukane) {
            poczatek = srodek + 1;
        }else
            koniec = srodek - 1;
    }
}