#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  unordered_map<char,int> mp;

  for(int i=0;i<n;i++){
    mp[s[i]]++;
  }

  int min = 10,max = 0;
  char min_val,max_val;

  for(auto i : mp){
    if(i.second<min){
      min=i.second;
      min_val=i.first;
    }
    if(i.second>=max){
      max=i.second;
      max_val=i.first;
    }
  }

  for(int i=0;i<n;i++){
    if(s[i]==min_val){
      s[i]=max_val;
      break;
    }
  }
  cout<<s<<endl;
  
}
int main(){
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}