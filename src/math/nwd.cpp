int nwd(int a, int b) {
   int x = 0;
   while(a != 0) {
     x = a;
     a = b % a;
     b = x;
   }

   return b;
}