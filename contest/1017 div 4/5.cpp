#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++) cin>>a[i];
        map<ll,ll> mp;
        ll ans = 0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<30LL;j++){
                if(a[i] & (1LL<<j)) mp[j]++;
            }
        }
        for(ll i=0;i<n;i++){
            ll sum=0;
            for(ll j=0;j<30LL;j++){
                if(a[i] & (1LL<<j))sum+=(n-mp[j])*(1LL<<j);
                else sum+=mp[j]*(1LL<<j);
            }
            ans = max(ans,sum);
        }
        cout<<ans<<endl;

    }
    
}