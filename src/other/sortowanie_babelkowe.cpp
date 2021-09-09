#include <iostream>

using namespace std;

int sortuj(int* A, int n) {
    for(int k = 0; k < n-1; k++) 
        for(int i = 0; i < n - k - 1; i++)
            if (A[i] > A[i + 1])
                swap(A[i], A[i + 1]);
}