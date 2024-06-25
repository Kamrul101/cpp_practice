#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
// int a[mx];



ll cal (ll x){
    
    return (x*(x+1))/2;
}
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        ll l=0, r = 3e9;
        ll ans=-1;
        while(l<=r){
            ll mid = (l+r)/2;
            if(cal(mid)==k){
                ans = mid;
            }
            if(cal(mid)>k){
                r = mid -1;

            }
            else l = mid+1;
        }
        if(ans==-1) cout<<"NAI"<<endl;
         else cout<<ans<<endl;
    }
}