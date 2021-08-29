vector<int> dzielniki() {
  vector<int> wszystkieDzielniki;
  for(int i=1; i<=sqrt(n); i++) {
      if(n % i == 0)
          wszystkieDzielniki.push_back(i);
          wszystkieDzielniki.push_back(n / i);
      }
  }
  return wszystkieDzielniki;
}
