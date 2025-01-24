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
        int n,m;
        cin>>n>>m;
        map<ll,ll> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]%m]++;
        }
        ll ans=0;
        for(auto u:mp){
            if(u.first==0) ans++;
            else if(2*u.first == m) ans++;
            else if(2*u.first<m || mp.find(m-u.first)==mp.end()){
                ll x = u.second,y=mp[m-u.first];
                ans+= 1 + max<ll>(0,abs(x-y)-1);
            }
        }
        cout<<ans<<endl;
    }
    
}