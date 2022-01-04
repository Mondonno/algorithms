/*
 * Definicja drzewa jest taka że mamy drzewo binarne ktore przechowuje dane wierzcholkow.
 * W tym typie drzewa bierzemy sumę z przedzialu (-przedzial)
 *
 * Zlozonosc: O(log2(n))
 * */

// todo: dodac większy opis dzialania niektorych funkcji ze wzgledu na modularnosc

const int BASE = 1 << 17;
long long Tree[BASE << 1];

void aktualizuj(int v, long long wartosc) {
    Tree[v] = wartosc;
    v >>= 1;
    while(v > 0) {
        Tree[v] = Tree[v] * 2;
        Tree[v] += Tree[v * 2 + 1];
        v >>= 1;
    }
}

int wynik(int a, int b) {
    long long rezultat = 0;
    a -= 1;
    b += 1;

    while((b - a) > 1) {
       if(!(a & 1)) {
          rezultat += Tree[a + 1];
       }
       if(b & 1) {
          rezultat += Tree[b - 1];
       }
    }
    return rezultat;
}
