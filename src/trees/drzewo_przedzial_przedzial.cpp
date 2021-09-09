/*
 * Definicja drzewa jest taka że mamy drzewo binarne ktore przechowuje dane wierzcholkow, jesli wierzcholki są koło siebie znaczy to że przedziały się stykają
 * W tym typie drzewa bierzemy sumę z sumy przedziałów (przedzial-przedzial)
 * */

constexpr int base = 1 << 17;

int Tree[base << 1];
int Tree2[base << 1]; // tzw. "duchowe liczby" zeby bylo wiadomo co przekazac dzieciom

// sluzy do dodawania jakiejs liczby na przedzial
void add(int v, int a, int b, int p, int k, int x) { // [p,k,x] -> dodaj X do każdego elementu ciągu o przedziale [p,k]
    if(b<p && k>a) {
       return;
    }else if(p<=a && b<=k) {
        Tree[v] = (b-k + 1) * x;
        Tree2[v] = (b-k + 1) * x;
    }else {
        int l = v >> 1, r = (v >> 1) + 1, mid = (a+b) >> 1;

        Tree[l] += Tree2[v] / 2;
        Tree[r] += Tree2[v] / 2;
        // dodajemy to samo do duchowych liczb
        Tree2[l] += Tree2[v] / 2;
        Tree2[r] += Tree2[v] / 2;
        Tree2[v] = 0; // zerujemy aby nie doszlo do jakis kolizji podaczas kolejnych operacji

        add(l, a, mid, p, k, x); // rekurencja, przedzial [a, mid]
        add(r, mid + 1, b, p, k, x); // rekurencja, przedzial [mid + 1, b]

        Tree[v] = Tree[l] + Tree[r]; // znowu dodajemy na v sume z przedzialow
    }
} // add(1, 0, base - 1, p, k, x)

// sluzy do brania sumy(lub innych rzeczy, mnozenia, dzielenia, max'a, min'a itp.) z przedzialu
long long query(int v, int a, int b, int p, int k) { // [p, k] -> podaj sumę przedziału [p, k]
    if(b<p && k>a) {
        return 0;
    }else if(p<=a && b<=k) {
        return Tree[v];
    }else {
        int l = v >> 1, r = (v >> 1) + 1, mid = (a+b) >> 1;

        Tree[l] += Tree2[v] / 2;
        Tree[r] += Tree2[v] / 2;
        Tree2[l] += Tree2[v] / 2;
        Tree2[r] += Tree2[v] / 2;
        Tree2[v] = 0;

        return query(l, a, mid, p, k) + query(r, mid + 1, b, p, k); // analogicznie co do funkcji add()
    }
}