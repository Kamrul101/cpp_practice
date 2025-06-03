#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 998244353
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e5+123;
ll a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    ll pre[mx];
    pre[0] = 1;
    for(int i=1;i<mx;i++){
        pre[i]  = (pre[i-1]*2)%MOD;
    }
    while(t--){
        int n;
        cin>>n;
        map<ll,ll>mp1,mp2;
        for(ll i=0;i<n;i++) {
            cin>>a[i];
            mp1[a[i]] = i;
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
            mp2[b[i]] = i;
        }
        vector<ll> ans;
        ll mxA = a[0], mxB = b[0];
        for(ll i=0;i<n;i++){
            mxA = max(mxA,a[i]);
            mxB = max(mxB,b[i]);

            pair<ll,ll> p1 = {mxA,b[i-mp1[mxA]]};
            pair<ll,ll> p2 = {mxB,a[i-mp2[mxB]]};
            pair<ll,ll> x = max(p1,p2);
            ans.push_back((pre[x.first]+pre[x.second])%MOD);
        }
        for(auto u:ans) cout<<u<<" ";
        cout<<endl;
    }
    
}