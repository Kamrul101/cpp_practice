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
        int n;
        cin>>n;
        vector<pair<ll,ll>>vp;
        for(int i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            vp.push_back({x,y});
        }
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        sort(vp.begin(),vp.end());
        ll v1 = abs(x1-x2), v2 = abs(y1-y2);
        ll dist = v1*v1+v2*v2;
        // cout<<dist<<endl;
        bool check = true;
        for(auto u:vp){
            ll x11 = u.first;
            ll y11 = u.second;
            ll v11 = abs(x11-x2),v22=abs(y11-y2);
            ll val = v11*v11+v22*v22;
            // cout<<val<<endl;
            if(val<=dist){
                check=false;
                break;
            }
        }
        cout<<(check?"YES":"NO")<<endl;
        
    }
    
}