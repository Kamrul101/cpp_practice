#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int inf = 1e9;
const ll infLL = 1000000000000000000;
const int mx =502;
ll dist[mx][mx];



int main() {
    optimize();
    int n,m,q;
    cin>>n>>m>>q;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j) dist[i][j] = infLL;
            else dist[i][j] = 0LL;
        }
    }

    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        dist[u][v] = min(dist[u][v],(ll)w);
        dist[v][u] = min(dist[v][u],(ll)w);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
    while(q--){
        int x,y;
        cin>>x>>y;
        if(dist[x][y]!=infLL) cout<<dist[x][y]<<endl;
        else cout<<-1<<endl;
    }
    
}