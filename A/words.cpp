#include <algorithm>
#include <ctype.h>
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  string newstr = "";
  int upperch = 0;
  int lowerch = 0;
  for (char ch : s) {
    if (isupper(ch)) {
      upperch++;
    } else {
      lowerch++;
    }
  }
  if (lowerch >= upperch) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  } else {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  cout<<s;

  return 0;
}