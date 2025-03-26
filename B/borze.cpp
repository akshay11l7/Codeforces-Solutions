#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string result = "";
  int i = 0;
  while (i < s.length()) {
    if (s[i] == '.') {
      result += '0';
      i++;
    } else if (s[i] == '-' && i + 1 < s.length()) {
      if (s[i + 1] == '.')
        result += '1';
      else
        result += '2';
      i += 2;
    }
  }
  cout << result;
  return 0;
}