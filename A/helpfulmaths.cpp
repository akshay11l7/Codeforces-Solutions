#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> numbers;
  for (int i = 0; i < s.length(); i += 2) {
    numbers.push_back(s[i] - '0');
  }
  sort(numbers.begin(), numbers.end());
  string newstr = "";
  for (int i = 0; i < numbers.size(); i++) {
    newstr += to_string(numbers[i]);
    if (i != numbers.size() - 1) {
      newstr += "+";
    }
  }
  cout << newstr;

  return 0;
}