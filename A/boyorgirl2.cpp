#include <iostream>
#include <set>
using namespace std;
int main() {
  string s;
  cin >> s;
  set<char> uniquechars;
  for (char c : s) {
    uniquechars.insert(c);
  }
  if (uniquechars.size() % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
  return 0;
}