#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5+123;
int a[mx];
// int dp[mx]={0};


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       ll ans = 1e10;
       for(int i=1;i<n;i++){
        ll x = max(a[i],a[i-1]);
        ans = min(ans, x-1);
       }
       cout<<ans<<endl;
       
    }
    
}
