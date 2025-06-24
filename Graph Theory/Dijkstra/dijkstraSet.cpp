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

// int a[mx];
vector<pair<ll,ll>> adjMat[mx];
ll dist[mx];

void dijkstra(ll s, int n){
    for(int i=0;i<=n;i++) dist[i] = infLL;
    dist[s] = 0;
    set<pair<ll,ll>>st;
    st.insert({0,s});
    while(!st.empty()){
        auto x = *(st.begin());
        ll cur =  x.first;
        ll u = x.second;
        st.erase(st.begin());
        
        for(auto p:adjMat[u]){
            ll v = p.first;
            ll w = p.second;
            if(cur+w<dist[v]){
                if(dist[v]!=infLL){
                    st.erase({dist[v],v});
                }
                dist[v] = cur+w;
                st.insert({dist[v],v});
            }
        }

    }
}

int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        ll x,y,w;
        cin>>x>>y>>w;
        adjMat[x].push_back({y,w});
        // adjMat[y].push_back({x,w});
    }
    dijkstra(0,n);
    for(int i=0;i<n;i++) cout<<dist[i]<<" ";
    
}