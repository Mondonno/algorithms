/*
 Algorytm "Merge Sort"
 Słuzy on do sortowania, metodą scalania kolejnych etapw posortowanych części
 Zlozonosc:
    - Czasowa: O(n log n)
    - Pamięciowa: Większa niz quick-sort (todo: do uzupełnienia)
*/

#include <vector>

using namespace std;

// A - Tablica do posortowania algorytmem merge-sort
// B - Tablica ktora została posortowana algorytmem (lub jest częściowo posortowana)
//     Jako wejście to powinna być pusta tablica o długości q - p (jeśli p <= q)

void MergeSort(vector<int> &A, vector<int> &B, int p, int q)
{
    if (p == q)
        return;
    int s = (p + q) / 2;
    MergeSort(A, B, p, s);
    MergeSort(A, B, s + 1, q);

    int i = p;
    int j = s + 1;
    for (int k = p; k <= q; k++)
        if (j > q || (i <= s && A[i] < A[j]))
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
    for (int k = p; k <= q; k++)
        A[k] = B[k];
}