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
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pair<ll,ll>> v;
        for(int i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        a--;
        b--;
        ll ans = abs(v[a].first-v[b].first)+abs(v[a].second-v[b].second);
        ll minA = LLONG_MAX/2,minB=LLONG_MAX/2;
        for(int i=0;i<k;i++){
            minA = min(minA,abs(v[a].first-v[i].first)+abs(v[a].second-v[i].second));
            minB = min(minB,abs(v[b].first-v[i].first)+abs(v[b].second-v[i].second));
        }
        cout<<min(ans,minA+minB)<<endl;
    }
    
}