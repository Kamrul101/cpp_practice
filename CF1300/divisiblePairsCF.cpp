#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        map<pair<ll,ll>,ll> mp;
        ll ans = 0;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            ll modX = (x - a%x)%x;
            ll modY = a%y;
            ans+=mp[{modX,modY}];
            mp[{a%x,a%y}]++;
        }
        cout<<ans<<endl;
        
    }
    
}