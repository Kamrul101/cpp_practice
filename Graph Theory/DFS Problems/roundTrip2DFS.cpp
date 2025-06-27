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
int pathVis[mx];


bool dfs(int u , int p){
    vis[u] = 1;
    pathVis[u] = 1;
    for(auto v:adjMat[u]){
        if(!vis[v]){
            parent[v] = u;
            if(dfs(v,u)==true){
                return true;
            }
        }
        else if(pathVis[v]){
            cycleStart = v;
            cycleEnd = u;
            return true;
        }
    }
    pathVis[u] = 0;
    return false;
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
        // adjMat[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i, 0)){
                cycleFound = true;
                break;
            }
        }
    }
    if(cycleFound) {
        // cout<<"CYCLE FOUND"<<endl;
        vector<int> path;
        int dest = cycleEnd;
        while(1){
            path.push_back(dest);
            dest = parent[dest];
            if(dest==cycleStart) break;
        }
        path.push_back(dest);
        path.push_back(cycleEnd);
        reverse(path.begin(),path.end());
        cout<<path.size()<<endl;
        for(auto u:path ){
            cout<<u<<" ";
        }
        cout<<endl;
    }
    else cout<<"IMPOSSIBLE"<<endl;   
}