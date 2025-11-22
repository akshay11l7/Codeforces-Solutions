#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q, sum0 = 0, sum1 = 0;
  cin >> n;
  cin >> p;
  vector<int> x(p);
  set<int> nums;
  while (p--) {
    int value0;
    cin >> value0;
    x.push_back(value0);
    nums.insert(value0);
  }
  cin >> q;
  vector<int> y(q);
  while (q--) {
    int value1;
    cin >> value1;
    x.push_back(value1);
    nums.insert(value1);
  }
  for (auto it = nums.begin(); it != nums.end(); it++) {
    sum0 += *it;
  }
  for (int i = 1; i <= n; i++) {
    sum1 += i;
  }
  if (sum1 == sum0)
    cout << "I become the guy." << endl;
  else
    cout << "Oh, my keyboard!" << endl;
  return 0;
}