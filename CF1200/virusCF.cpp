#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> v(m);
        for(ll i=0;i<m;i++){
            cin>>v[i];
            v[i]--;
        }
        sort(v.begin(),v.end());
        vector<ll> d;
        for(ll i=0;i<m-1;i++){
            ll x = v[i+1] - v[i] -1*1LL;
            d.push_back(x);
        }
        d.push_back(n-v[m-1]+v[0]-1*1LL);
        sort(d.rbegin(),d.rend());
        ll cur=0,ans=0;
        for(auto u:d){
            ll cnt = u - 2*cur;
            if(cnt<=0) break;
            if(cnt<=2){
                ans++;
                cur++;
            }
            else{
                ans+= cnt - 1;
                cur+=2;  
            }
        }
        cout<<n-ans<<endl;
        
    }
    
}