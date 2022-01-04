/*
 Podstawowy algorytm euklidesa
 Wyszukuje Największy Wspólny Dzielnik dla liczb a i b

 Zlozonosc: O(log2(max(n, k)))
*/

int nwd(int a, int b) {
   int x = 0;
   while(a != 0) {
     x = a;
     a = b % a;
     b = x;
   }

   return b;
}
