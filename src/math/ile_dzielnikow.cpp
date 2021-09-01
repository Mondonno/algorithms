int ileDzielnikow(int N)
{
    int ile = 0;
    for (int i = 0; i < sqrt(N); i++)
        if(N % i) ile++;
    return ile;
}