// euklides rozszerzony rekurencjynie
// todo: dodanie euklidesa rozszerzonego iteracyjnie

// poprzedni y
int yp;

// 

int x = 1;
int y = 0;

void euklidesRozszerzony(int a, int b) {
    if(b == 0) return;
    euklidesRozszerzony(b, a % b);

    yp = y;
    y = x - ((a/b) * yp);
    x = yp;
}