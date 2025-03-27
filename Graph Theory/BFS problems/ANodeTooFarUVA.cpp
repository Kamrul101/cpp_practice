#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e4+123;
// int a[mx];
int lvl[mx];
vector<int>adj[mx];

void bfs(int s){
    mem(lvl,-1);
    lvl[s]=0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v:adj[u]){
            if(lvl[v]==-1){
                lvl[v] = lvl[u]+1;
                q.push(v);
            }
        }
    }
}

int main() {
    optimize();
    int n,tc=1;
    while(1){
        cin>>n;
        if(n==0) break;
        for(int i=0;i<mx;i++) adj[i].clear();
        set<int> nodes;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            nodes.insert(x);
            nodes.insert(y);
        }
        while(1){
            int q,k;
            cin>>q>>k;
            if(q==0 && k==0) break;
            bfs(q);
            int cnt=0;
            for(auto u: nodes){
                if(lvl[u]==-1 || lvl[u]>k){
                    cnt++;
                }
            }
            cout<<"Case "<<tc<<": "<<cnt<<" nodes not reachable from node "<<q<<" with TTL = "<<k<<"."<<endl;
            tc++;
        }
    }
    
}