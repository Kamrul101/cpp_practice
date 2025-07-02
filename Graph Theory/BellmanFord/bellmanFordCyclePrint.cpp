#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int mx =1e5+123;


vector<array<ll,3>> edges;
ll dist[mx];
ll par[mx];
ll x = -1;
bool bellman(ll src, ll n, ll m){
    for(int i=1;i<=n;i++) dist[i] = infLL;
    dist[src] = 0;
    for(int i=1;i<=n;i++){
        for(auto e:edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            if(dist[u]+w<dist[v]){
                dist[v] = dist[u]+w;
                par[v] = u;
                if(i==n) x = v;
            }
        }
    }
    return (x!=-1);
 
}


int main() {
    optimize();
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        ll x,y,w;
        cin>>x>>y>>w;
        edges.push_back({x,y,w});
    }
    bool check = bellman(1,n,m);
    if(check){
        for(int i=0;i<n;i++) x = par[x];
        vector<ll> path;
        ll dest = x;
        while(1){
            path.push_back(dest);
            dest = par[dest];
            if(dest==x) break;
        }
        path.push_back(dest);
        reverse(path.begin(),path.end());
        cout<<"YES"<<endl;
        for(auto u:path) cout<<u<<" ";
 
    }
    else cout<<"NO"<<endl;
    
}