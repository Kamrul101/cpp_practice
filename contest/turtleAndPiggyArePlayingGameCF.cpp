#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
      ll l, r;
      cin>>l>>r;
      int p=2;
      int ans = 0;
      while(p<=r){
        p*=2;
        ans++;
      }
      cout<<ans<<endl;
    }

}
