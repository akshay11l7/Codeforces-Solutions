#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum1 = 0, sum2 = 0;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  sort(nums.rbegin(), nums.rend());
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      sum1 += nums[i];
    else
      sum2 += nums[i];
  }
  cout<<sum1<<" "<<sum2<<endl;
  return 0;
}