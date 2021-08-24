int potega(int a, int n)
{
    if (n == 1)
        return a;
    if (n % 2 == 0)
    {
        int s = potega(a, n / 2);
        return s * s;
    } else
    {
        int s = potega(a, n - 1);
        return a * s;
    }
}