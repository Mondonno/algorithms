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