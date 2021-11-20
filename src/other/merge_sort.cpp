// todo: algorytm nie kompletny wymaga poprawy skladniowej

void MergeSort(int p, int q)
{
    if (p==q)
        return;
    int s = (p + q) / 2;
    MergeSort(p, s);
    MergeSort(s+1, q);

    int i = p;
    int j = s+1;
    for (int k = p; k <= q; k++)
        if (j>q || ( i<=s && A[i] < A[j] ) )
        {
           B[k] = A[i];
           i++;
        } else
        {
           B[k] = A[j];
           j++;
        }
    for(int k = p ; k <= q; k++)
          A[k] = B[k];
}