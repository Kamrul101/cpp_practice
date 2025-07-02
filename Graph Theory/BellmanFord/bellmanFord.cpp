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


vector<array<int,3>> edges;
int dist[mx];

bool bellman(int src, int n, int m){
    for(int i=0;i<=n;i++) dist[i] = inf;
    dist[src] = 0;
    int x = -1;
    for(int i=1;i<=n;i++){
        for(auto e:edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            if(dist[u]!=inf && dist[u]+w<dist[v]){
                dist[v] = dist[u]+w;
                if(i==n){
                    x = v;
                    break;
                }
            }
        }
    }
    return (x!=-1);
}

int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    edges.clear();
    for(int i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        edges.push_back({x,y,w});
    }
    bool check = bellman(0,n,m);
    if(check) cout<<"Has Negative Cycle"<<endl;
    else cout<<"No Negative Cycle"<<endl;

    
}