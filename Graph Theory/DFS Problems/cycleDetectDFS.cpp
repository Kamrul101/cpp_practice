#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =1e5+123;
bool vis[mx] = {0};
vector<int> adjMat[mx];
bool cycleFound = false;
int cycleStart, cycleEnd;
int parent[mx];


void dfs(int v , int p){
    if(vis[v]){
        if(!cycleFound){
            cycleFound = true;
            cycleStart = v;
            cycleEnd = p;
        }
        return;
    }
    vis[v] = 1;
    parent[v] = p;
    for(auto u:adjMat[v]){
        if(u!=p){
            dfs(u,v);
        }
    }
}

void clean(int n){
    for(int i = 1; i <= n; i++){
        adjMat[i].clear();
        vis[i] = false;
    }
}


int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x , y;
        cin>>x>>y;
        adjMat[x].push_back(y);
        adjMat[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i, 0);
        }
    }
    if(cycleFound) {
        cout<<"CYCLE FOUND"<<endl;
        vector<int> path;
        int dest = cycleEnd;
        while(1){
            path.push_back(dest);
            dest = parent[dest];
            if(dest==cycleStart) break;
        }
        path.push_back(dest);
        reverse(path.begin(),path.end());

        for(auto u:path ){
            cout<<u<<" ";
        }
        cout<<endl;
    }
    else cout<<"CYCLE NOT FOUND"<<endl;   
}