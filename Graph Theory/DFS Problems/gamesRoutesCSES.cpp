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
vector<int> topological_order;

void dfs(int v){
    vis[v] = 1;
    for(auto u:adjMat[v]){
        if(!vis[u]){
            dfs(u);
        }
    }
    topological_order.push_back(v);
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
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    reverse(topological_order.begin(),topological_order.end());
    
    
    int ans[n+2];
    mem(ans,-1);
    ans[n] = 1;
    for(int i=n-1;i>=0;i--){
        int u = topological_order[i];
        if(u==n) continue;
        int sum = 0;
        for(auto v: adjMat[u]){
            sum+=ans[v];
            sum%=MOD;
        }
        ans[u] = sum;
    }
    cout<<ans[1]<<endl;
}