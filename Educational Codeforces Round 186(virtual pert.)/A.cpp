#include <bits/stdc++.h>
using namespace std;
const int INF=1e9+5;
const int mod=1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string sub1="2026" , sub2="2025";
        if(s.find(sub2)!=string::npos && s.find(sub1)==string::npos){
            cout<<"1\n";
        }
        else{
            cout<<"0\n";
        }
    }

    return 0;
}