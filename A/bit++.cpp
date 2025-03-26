#include <iostream>

using namespace std;

int main() {
  int n, X = 0;
  cin >> n;
  while (n--) {
    string operation;
    cin >> operation;
    if (operation.find("++") != string::npos) {
      X++;
    } else {
      X--;
    }
  }
  cout<<X;
  return 0;
}