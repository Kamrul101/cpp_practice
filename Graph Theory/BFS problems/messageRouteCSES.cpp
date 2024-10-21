#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 2e5+123;
int lvl[mx]={0};
vector<int> adj[mx];
int par[mx];

void bfs(int s){
    lvl[s]=1;
    queue<int> q;
    q.push(s);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: adj[u]){
            if(!lvl[v]){
                lvl[v] = lvl[u]+1;
                par[v] = u;
                q.push(v);
            }
        }
    }
}

int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(1);
    if(lvl[n]==0) cout<<"IMPOSSIBLE"<<endl;
    else{
        cout<<lvl[n]<<endl;
        vector<int> v;
        int s=1,t=n;
        par[s]=-1;
        while(t!=-1){
            v.push_back(t);
            t = par[t];
        }
        reverse(v.begin(),v.end());
        for(auto u:v) cout<<u<<" ";
    }
    
}