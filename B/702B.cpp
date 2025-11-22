#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    unordered_map<int,int> freq;
    vector<int> pows;
    for (int i = 0; i <= 31; i++) pows.push_back(1LL << i);

    long long ans = 0;

    for (int x : a) {
        for (int p : pows) {
            int need = p - x;
            if (freq.count(need)) ans += freq[need];
        }
        freq[x]++;
    }

    cout << ans;
    return 0;
}
