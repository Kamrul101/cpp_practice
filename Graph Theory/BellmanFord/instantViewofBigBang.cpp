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
const int mx = 2001;


vector<array<int,3>> edges;
vector<int>adj[mx];
int dist[mx];
int isRelaxed[mx];
int vis[mx];

void dfs(int u){
    vis[u] = 1;
    for(auto v:adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

bool bellman(int src, int n, int m){
    for(int i=0;i<=n;i++) dist[i] = inf;
    dist[src] = 0;
    int x = -1;
    for(int i=1;i<=n;i++){
        for(auto e:edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            if(dist[u]+w<dist[v]){
                dist[v] = dist[u]+w;
                if(i==n){
                    x = v;
                    isRelaxed[v] = 1;
                }
            }
        }
    }
    return (x!=-1);
}

int main() {
    optimize();
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int n,m;
        cin>>n>>m;

        edges.clear();
        mem(vis,0);
        mem(isRelaxed,0);
        for(int i=0;i<=n;i++) adj[i].clear();
        for(int i=0;i<m;i++){
            int x,y,w;
            cin>>x>>y>>w;
            edges.push_back({y,x,w});
            adj[y].push_back(x);
        }
        bool check = bellman(0,n,m);
        if(!check){
            cout<<"Case "<<tc<<": impossible"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(isRelaxed[i]){
                    dfs(i);
                }
            }
            cout<<"Case "<<tc<<": ";
            for(int i=0;i<n;i++){
                if(vis[i]){
                    cout<<i<<" ";
                }
            }
            cout<<endl;

        }
        
    }

    
}