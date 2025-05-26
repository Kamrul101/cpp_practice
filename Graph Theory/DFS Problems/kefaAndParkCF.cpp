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
int cat[mx];
int n,m,ans = 0;

void dfs(int v, int cnt){
    vis[v] = 1;
    int c;
    if(cat[v]==1){
        c = cnt+1;
    }
    else c=0;
    if(c>m) return;
    if(adjMat[v].size()==1 && v!=1) ans++;
    for(auto u:adjMat[v]){
        if(!vis[u]){
            dfs(u,c);
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
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>cat[i];
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        adjMat[x].push_back(y);
        adjMat[y].push_back(x);
    }
    dfs(1,0);
    cout<<ans<<endl;
       
}