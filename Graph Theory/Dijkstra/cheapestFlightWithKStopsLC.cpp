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
vector<pair<int,int>> adjMat[mx];
int dist[mx];
int par[mx];

void dijkstra(int s, int n, int k){
    for(int i=0;i<=n;i++) dist[i] = inf;
    priority_queue<pair<int,pair<int,int>>,
                    vector<pair<int,pair<int,int>>>,
                    greater<pair<int,pair<int,int>>>>pq;    
    
    dist[s] = 0;
    pq.push({0,{s,0}});

    while(!pq.empty()){
        int stop = pq.top().first;
        int u = pq.top().second.first;
        int cur = pq.top().second.second;

        pq.pop();

        if(stop>k) continue;

        for(auto p:adjMat[u]){
            int v = p.first;
            int w = p.second;

            if(cur+w<dist[v] && stop<=k){
                dist[v] = cur+w;
                pq.push({stop+1,{v,dist[v]}});
                
            }
        }
    }
}

int main() {
    optimize();
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        ll x,y,w;
        cin>>x>>y>>w;
        adjMat[x].push_back({y,w});
        // if bidirectional
        // adjMat[y].push_back({x,w});
    }
    dijkstra(0,n,k);
    for(int i=0;i<n;i++) cout<<dist[i]<<" ";
     
}