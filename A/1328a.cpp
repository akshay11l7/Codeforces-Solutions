#include <bits/stdc++.h>
using namespace std;
void s() {
  int a, b;
  cin>>a>>b;
  int r=a%b;
  if(r==0){
    cout<<"0"<<endl;
  }
  else{
    cout<<b-r<<endl;
    }

}
int main() {
  int t;
  cin >> t;
  while (t--) {
    s();
  }
  return 0;
}