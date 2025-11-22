#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  double result;
  double total_sum = 0.0;
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    total_sum += p / 100.0;
  }
  result=(total_sum/n)*100;
  cout<<fixed<<setprecision(10)<<result;
  return 0;
}