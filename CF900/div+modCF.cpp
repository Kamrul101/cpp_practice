#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       ll l,r,a;
       cin>>l>>r>>a;
       ll ans = r/a + r%a;
       ll newL = r - r%a -1;
       if(newL>=l ) ans = max(ans, newL/a + newL%a);
       cout<<ans<<endl;
    }
    
}
