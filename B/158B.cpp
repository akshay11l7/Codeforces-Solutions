#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> freq(5, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int ans = freq[4]; 

    int pair31 = min(freq[3], freq[1]);
    ans += pair31;
    freq[3] -= pair31;
    freq[1] -= pair31;


    ans += freq[3];

    ans += freq[2] / 2;
    freq[2] %= 2;


    if (freq[2]) {
        ans++; 
        freq[1] = max(0, freq[1] - 2);
    }

    ans += (freq[1] + 3) / 4;

    cout << ans << "\n";
    return 0;
}
