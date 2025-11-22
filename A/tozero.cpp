#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    if (n % 2 == 0) {
        cout << (int)ceil((double)n / (k - 1)) << endl;
    } else {
        int a = n - k;
        cout << (int)ceil((double)a / (k - 1) + 1) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
