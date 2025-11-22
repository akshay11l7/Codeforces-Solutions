#include <bits/stdc++.h>
using namespace std;

vector<int> solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<int> pref(n+1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i-1] + a[i];
    }

    for (int l = 1; l <= n-2; l++) {
        for (int r = l+1; r <= n-1; r++) {
            int s1 = pref[l] % 3;
            int s2 = (pref[r] - pref[l]) % 3;
            int s3 = (pref[n] - pref[r]) % 3;

            if (s1 < 0) s1 += 3;
            if (s2 < 0) s2 += 3;
            if (s3 < 0) s3 += 3;

            if (s1 == s2 && s2 == s3) {
                return {l, r};
            }

            if (s1 != s2 && s2 != s3 && s1 != s3) {
                return {l, r};
            }
        }
    }
    return {0, 0};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        vector<int> ans = solve();
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
