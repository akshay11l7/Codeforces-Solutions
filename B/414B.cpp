#include <bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,k,ans=0;
    cin>>n>>k;
    vector<int> factors[n+1];

    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                factors[i].push_back(j);
                if(i/j!=j){
                    factors[i].push_back(i/j);
                }
            }
        }
    }

    int dp[k+1][n+1];
    for(int j=1;j<=n;j++){
        dp[1][j]=1;
    }

    for(int i=2;i<=k;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=0;
            for(auto x:factors[j]){
                dp[i][j] = (dp[i][j] + dp[i-1][x])%mod;
            }
        }
    }
    for(int j=1;j<=n;j++){
        ans = (ans+dp[k][j])%mod;
    }
    cout<<ans%mod;
    return 0;
}
// dp[i][j] -> no. of good seqns of length i and ending with j.
// we need to find ans+=dp[k][j]..j=1 to N