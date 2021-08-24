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
