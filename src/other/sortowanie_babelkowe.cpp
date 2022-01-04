/*
 Sortowanie tablicy metodą bąbelkową.
 Działa on zgodnie z jego nazwą

 Zlozonosc: O(n^2)
*/

#include <vector>

using namespace std;

int sortuj(vector<int> A, int n) {
    for(int k = 0; k < n-1; k++) 
        for(int i = 0; i < n - k - 1; i++)
            if (A[i] > A[i + 1])
                swap(A[i], A[i + 1]);
}