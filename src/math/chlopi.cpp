// metoda mnozenia metoda chlopow rosyjskich

int mnozenieChlopskie(int a, int b) {
    if (b == 0)
        return 0;
    int h = mnozenieChlopskie(a, b / 2) * 2;
    if (b % 2 == 0)
        return h;
    return h + a;
}