#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =5e5+123;
bool vis[mx] = {0};
int par[mx];
vector<int>path;
int ans[mx];
vector<int> adjMat[mx];
int cnt;

void dfs(int v,int p){
    vis[v] = 1;
    par[v] = p;
    cnt++;
    path.push_back(v);
    for(auto u:adjMat[v]){
        if(!vis[u]){
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
        bool c = false;
        int k;
        cin>>k;
        int prev;
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            if(!c){
                prev = x;
                c = true;
            }
            else{
                adjMat[x].push_back(prev);
                adjMat[prev].push_back(x);
                prev = x;
            }
        }
    }

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            path.clear();
            cnt = 0;
            dfs(i,0);
            for(auto u:path) ans[u] = cnt;
        }
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";

}