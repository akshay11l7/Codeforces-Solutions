#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k, count = 0;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i]>0&&arr[i] >= arr[k - 1]) {
      count++;
    }
  }
  cout << count;
  return 0;
}