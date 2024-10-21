#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];
vector<int> adj[mx];
int col[mx];

bool bipartite(int s){
    col[s] = 1;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: adj[u]){
            if(col[v]==-1){
                if(col[u]==1) col[v]=2;
                else col[v]=1;
                q.push(v);
            }
            else if(col[v]==col[u]) return false;
        }
    }
    return true;
}

int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    mem(col,-1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool check=true;
    for(int i=1;i<=n;i++){
        if(col[i]==-1){
            check = bipartite(i);
            if(!check) break;
        }
        
    }
    
    if(check){
        for(int i=1;i<=n;i++) cout<<col[i]<<" ";
    }
    else cout<<"IMPOSSIBLE"<<endl;
}