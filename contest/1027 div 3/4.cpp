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
int n;
ll rectangle(ll minX, ll maxX, ll minY, ll maxY){
    ll h = maxX - minX+1;
    ll w = maxY - minY+1;
    if(h*w<n){
        return min((h+1)*w, h*(w+1));
    }
    return h*w;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        // vector<int>x(n),y(n);
        vector<pair<ll,ll>> x(n),y(n);
        for(int i=0;i<n;i++) {
            cin>>x[i].first>>y[i].first;
            x[i].second = i;
            y[i].second = i;
        }
        if(n==1) {
            cout<<1<<endl;
            continue;
        }

        sort(x.begin(),x.end());        
        sort(y.begin(),y.end());

        ll x1 = x[0].first;
        ll x2 = x[n-1].first;
        ll y1 = y[0].first;
        ll y2 = y[n-1].first;

        ll ans = rectangle(x1,x2,y1,y2);

        x1 = x[0].second;
        x2 = x[n-1].second;
        y1 = y[0].second;
        y2 = y[n-1].second;

        set<ll> s = {x1,x2,y1,y2};
        for(auto u: s){
            int minX = (x1==u)?x[1].first:x[0].first; 
            int maxX = (x2==u)?x[n-2].first:x[n-1].first; 
            int minY = (y1==u)?y[1].first:y[0].first; 
            int maxY = (y2==u)?y[n-2].first:y[n-1].first; 
            ans = min(ans, rectangle(minX,maxX,minY,maxY));
        }
        cout<<ans<<endl;
    }
    
}