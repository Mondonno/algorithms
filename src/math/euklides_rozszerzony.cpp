// todo: dodanie euklidesa rozszerzonego iteracyjnie

/*
 Euklides rozszerzony zaimplementowany rekurencjynie
*/

int yp;

int x = 1;
int y = 0;

void euklidesRozszerzony(int a, int b) {
    if(b == 0) return;
    euklidesRozszerzony(b, a % b);

    yp = y;
    y = x - ((a/b) * yp);
    x = yp;
}