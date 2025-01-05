#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            mp[v[i]]++;
        }
        ll mxVal=-1, mx=-1;
        vector<pair<ll,ll>> p;
        for(auto u:mp){
            if(u.second>mx){
                mx = u.second;
                mxVal = u.first;
            }
            p.push_back({u.second,u.first});
        }
        sort(p.begin(),p.end());
        for(auto &u:p){
            if(k==0) break;
            if(u.first<=k && k>0 && u.second!=mxVal){
                k-=u.first;
                u.first=0;
            }
        }
        ll ans = 0;
        for(auto &u:p){
            if(u.first>0){
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }
    
}