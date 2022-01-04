/*
 Algorytm szukający na ciągu, pewnego podciągu,
 którego operacje przypominają ruchy gąsienicy
 
 Zlozonosc: O(2 * n)
*/

#include <vector>

int gasienica(std::vector<int> A, int n, int K)
{
    int licznik = 0; // tu będziemy zliczać fragmenty o sumie K
    int suma = A[0];
    int j = 0;
    for (int i = 0; i < n; i++) // dla ustalonego
    {
        while ((j < n - 1) && (suma < K))
        {
            j++;          // zwiększaj j, doliczając A[j] do sumy
            suma += A[j]; // dopóki nie przekroczysz K, albo j nie osiągnie maksymalnej wartości n-1
        }
        if (suma == K)
            licznik++;
        suma -= A[i]; // za chwilę przejdziemy od i do i+1, trzeba odliczyć A[i] od sumy
    }
}