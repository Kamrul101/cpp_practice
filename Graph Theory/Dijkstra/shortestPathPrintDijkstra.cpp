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
ll par[mx];

void dijkstra(ll s, int n){
    for(int i=1;i<=n;i++) dist[i] = infLL;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    dist[s]=0;
    pq.push({0,s});
    while(!pq.empty()){
        ll cur = pq.top().first;
        ll u = pq.top().second;
        pq.pop();
        if(dist[u]<cur) continue;
        for(auto p:adjMat[u]){
            ll v = p.first;
            ll w = p.second;
            if(cur+w<dist[v]){
                dist[v] = cur + w;
                par[v] = u;
                pq.push({dist[v],v});
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
        // if bidirectional
        // adjMat[y].push_back({x,w});
    }
    dijkstra(1,n);
    // for(int i=0;i<n;i++) cout<<dist[i]<<" ";
    if(dist[n]==infLL) cout<<-1<<endl;
    else{
        vector<int> v;
        int dest = n;
        while(dest!=0){
            v.push_back(dest);
            dest = par[dest];
        }
        reverse(v.begin(),v.end());
        for(auto u:v) cout<<u<<" ";

    }
     
}