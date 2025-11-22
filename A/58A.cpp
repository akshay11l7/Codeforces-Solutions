#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    string s;
    cin>>s;
    string target = "hello";
    int j=0;
    for(char c:s){
        if(c==target[j]){
            j++;
        }
        if(j==target.size()){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}