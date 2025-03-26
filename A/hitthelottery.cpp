#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, bills = 0;
  cin >> n;
  int denom[] = {100, 20, 10, 5, 1};
  for (int d : denom) {
    bills += n / d;
    n = n % d;
  }
  cout<<bills<<endl;
  return 0;
}