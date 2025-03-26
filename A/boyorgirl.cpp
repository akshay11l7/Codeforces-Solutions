#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  string s;
  cin >> s;
  int count = 0;
  vector<int> numbers;
  for (int i = 0; i < s.length(); i++) {
    numbers.push_back(s[i] - '0');
  }
  sort(numbers.begin(), numbers.end());
  for (int i = 0; i < numbers.size() - 1; i++) {
    if (numbers[i] == numbers[i + 1]) {
      count++;
    }
  }
  if ((numbers.size()-count) % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
  return 0;
}