/*
 Podstawowy algorytm euklidesa
 Wyszukuje Najmniejszą Wspólną Wielkrotność dwóch liczb (a i b)
 Zlozonosc: O(log2(max(n, k)))
*/

int nww(int a, int b)
{
    int x = 0;
    int b1 = b;
    int a1 = a;

    while (a1 != 0)
    {
        x = a1;
        a1 = b1 % a1;
        b1 = x;
    }

    return (a * b) / b1;
}

/*
Alternatywa (ze wzgledu na zasady caly kod jest poprawny wyzej bez potrzeby dolaczania NWD)

a i b to dwie liczby dla ktorych mamy znalezc najwieksza wspolna wielokrotnosc

int nww(int a, int b){
    return (a * b) / nwd(a, b);
}
*/